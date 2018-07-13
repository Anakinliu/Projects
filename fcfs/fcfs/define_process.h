#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#define PCBs_length 5
typedef struct PCB {
	char process_name[40]; //��PCB����֪
	struct PCB * next_process; // ! ϵͳ������ݶ���ִ�н���
	double run_time_need; //��PCB����֪
	double arrive_time; //��PCB����֪
	int prior_number; // ! ������δ����, Ĭ����0
	int status; // ! ״̬λ, 0Ϊ��������, 1Ϊ����
}PCB;

struct PCB process_1 = {
	"process_1",
	NULL,
	10.0,
	0.8,
	0,
	1
};
struct PCB process_2 = {
	"process_2",
	NULL,
	8.0,
	1.0,
	0,
	1
};
struct PCB process_3 = {
	"process_3",
	NULL,
	9.0,
	0.5,
	0,
	1
};
struct PCB process_4 = {
	"process_4",
	NULL,
	12.0,
	1.5,
	0,
	1
};
struct PCB process_5 = {
	"process_5",
	NULL,
	5.0,
	5.0,
	0,
	1
};


