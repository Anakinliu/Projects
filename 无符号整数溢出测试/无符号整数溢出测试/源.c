#include <stdio.h>

int main() {
	// �޷������������ֵ��ᱻȡģ��ȡ
	// ȡģ�ķ������ض̿��Ա�ֻ֤����͵�32λ����Ч��
	// ģ�������ֵ����һ, ����0x100000000
	unsigned int x = 0xffffffffff;
	printf("x = %u\n", x);
	/*
	��������ʽ�а����˲�ͬ��ȵĲ�����ʱ����С��ȵĲ���������������
	���ϴ������һ���Ŀ�ȣ�Ȼ���ٽ��м��㣬��������������ڽ�С��ȵı����У�����ᱻ�ٴνض̵���С
	�Ŀ�ȡ�
	*/
	int int_y = 0xff;
	printf("y = 0x%x\n", int_y);
	int_y += 1;
	printf("y = 0x%x\n", int_y);
	// �з��ŵ�short�����ڳ������λ��ʱ, ����ʱ������Ƚ��м���, Ȼ��
	// ����ᱻ�ٴνض̵���С�Ŀ�ȡ�
	short short_y = 0xffffff;  //����0xffff�Ͷ�ȡΪ-1
	printf("y = 0x%x\n", short_y);
	printf("y = %d\n", short_y);
	printf("y = %d\n", short_y + 1); // result is 0
	return 0;
}
