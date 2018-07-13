#include <stdio.h>
#include <sys/wait.h>
#include <unistd.h>
#define PCBs_length 5
typedef struct PCB {
	char process_name[40]; //在PCB中已知
	struct PCB * next_process; // ! 系统将会根据队列执行进程
	double run_time_need; //在PCB中已知
	double arrive_time; //在PCB中已知
	int prior_number; // ! 优先数未分配, 默认是0
	int status; // ! 状态位, 0为结束运行, 1为就绪
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


