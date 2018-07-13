#include <iostream>

#include <winsock2.h>

//#include <windows.h>

#include <winsock.h>

#include <stdio.h>
// 后引入的覆盖前引入的
#pragma comment(lib, "ws2_32.lib")
using namespace std;

int main()
{
    /*start*/
    // 初始化windows的网络栈, 固定
    WSADATA wsaData;
    // 根据返回值验证是否初始化成功
    if (WSAStartup(
               MAKEWORD(1, 1),
               &wsaData
               ) != 0) {
        return 1; // 失败
    }

    /*socket(socket的协议族，
             socket的类型， 0)*/
    SOCKET srv_sock = socket(AF_INET, SOCK_STREAM, 0);

    sockaddr_in srv_addr;
    // 设置src_addr全0， 这样srv_addr.sin_zero就不用单独设置
    memset(&srv_addr, 0, sizeof(srv_addr));
    srv_addr.sin_family = AF_INET;
    // 转换为网络字节序
    srv_addr.sin_port = htons(6666);
    srv_addr.sin_addr.S_un.S_addr =
    htons(INADDR_ANY); // 0.0.0.0

    if (bind(srv_sock, (sockaddr*)&(srv_addr), sizeof(srv_addr)) > 0 ) {
        return 1;
    }

    listen(srv_sock, 5); //不要太大
    int client_addr_len;
    printf("%s", "listening...\n");
    sockaddr_in client_addr;
    while(1) {
        SOCKET client_sock = accept(srv_sock,
                (sockaddr*)&client_addr,
                &client_addr_len);
        printf("connected to client!\n");

        char recv_buf[BUFSIZ]; //1024字节缓存区
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
