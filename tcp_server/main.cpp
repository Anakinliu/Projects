#include <iostream>

#include <winsock2.h>

//#include <windows.h>

#include <winsock.h>

#include <stdio.h>
// ������ĸ���ǰ�����
#pragma comment(lib, "ws2_32.lib")
using namespace std;

int main()
{
    /*start*/
    // ��ʼ��windows������ջ, �̶�
    WSADATA wsaData;
    // ���ݷ���ֵ��֤�Ƿ��ʼ���ɹ�
    if (WSAStartup(
               MAKEWORD(1, 1),
               &wsaData
               ) != 0) {
        return 1; // ʧ��
    }

    /*socket(socket��Э���壬
             socket�����ͣ� 0)*/
    SOCKET srv_sock = socket(AF_INET, SOCK_STREAM, 0);

    sockaddr_in srv_addr;
    // ����src_addrȫ0�� ����srv_addr.sin_zero�Ͳ��õ�������
    memset(&srv_addr, 0, sizeof(srv_addr));
    srv_addr.sin_family = AF_INET;
    // ת��Ϊ�����ֽ���
    srv_addr.sin_port = htons(6666);
    srv_addr.sin_addr.S_un.S_addr =
    htons(INADDR_ANY); // 0.0.0.0

    if (bind(srv_sock, (sockaddr*)&(srv_addr), sizeof(srv_addr)) > 0 ) {
        return 1;
    }

    listen(srv_sock, 5); //��Ҫ̫��
    int client_addr_len;
    printf("%s", "listening...\n");
    sockaddr_in client_addr;
    while(1) {
        SOCKET client_sock = accept(srv_sock,
                (sockaddr*)&client_addr,
                &client_addr_len);
        printf("connected to client!\n");

        char recv_buf[BUFSIZ]; //1024�ֽڻ�����
        char send_buf[BUFSIZ] = "hi, client";
        char exit[BUFSIZ] = "exit";
        while (send_buf != exit) {
            send(client_sock, send_buf, BUFSIZ, 0);

            int recv_len = recv(client_sock, recv_buf, BUFSIZ, 0);
            printf("server recv: ");
            if (recv_len > 0) {
                printf("%s\n", recv_buf);
                send(client_sock, send_buf, BUFSIZ, 0);
                printf("say: ");
                scanf("%s", send_buf);
            } else{
                printf("NO CLIENT\n");
            }

        }

        closesocket(client_sock);
    }

    closesocket(srv_sock);

    WSACleanup();
    /*end*/

}
