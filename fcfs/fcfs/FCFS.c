#include "define_process.h"

/*
返回需要运行的一个进程, 将此进程的状态改变
*/
PCB * generate_FCFS_next_process(PCB * PCBs) {
	int prior_number = 5;
	double min_arrive_time =
		PCBs[PCBs_length - 1].arrive_time; // 剩余的最后一个进程无需比较
										   // 得到最小到达时间
	int i;
	for (i = 0; i < PCBs_length - 1; i++) {
		if (PCBs[i].prior_number != 0) {
			// 说明已经分配优先级了
			prior_number--;
			continue; //排除此进程
		}
		min_arrive_time = PCBs[i].arrive_time;
		for (int j = i + 1; j < PCBs_length; j++) {
			if (PCBs[j].prior_number != 0) {
				// 说明已经分配优先级了
				prior_number--;
				continue; //排除此进程
			}
			if (PCBs[j].arrive_time < min_arrive_time) {
				min_arrive_time = PCBs[j].arrive_time;
			}
		}
		break;
		/*if (PCBs[i + 1].prior_number != 0) {
		if (min_arrive_time != -1 &&
		PCBs[i].arrive_time < min_arrive_time) {
		min_arrive_time = PCBs[i].arrive_time;
		}
		continue;
		}
		else {
		if (PCBs[i + 1].arrive_time <
		PCBs[i].arrive_time) {
		min_arrive_time =
		PCBs[i + 1].arrive_time;
		}
		else {
		min_arrive_time = PCBs[i].arrive_time;
		}

		}*/
	}


	//printf("%d\n", min_arrive_time);

	// 寻找最早到达时间对应的进程
	for (int i = 0; i < PCBs_length; i++) {
		if (PCBs[i].prior_number != 0) {
			// 说明已经分配优先级了
			continue; //排除此进程
		}
		else {
			if (PCBs[i].arrive_time ==
				min_arrive_time) {
				PCBs[i].prior_number = prior_number;
				return &PCBs[i];
			}
		}
	}
	return NULL;
}

/*
根据到达时间生成线程执行队列
*/
PCB * generate_FCFS_exec_list(PCB * PCBs) {
	PCB * first = generate_FCFS_next_process(PCBs);
	PCB * next = generate_FCFS_next_process(PCBs);
	first->next_process = next;
	PCB * next_;
	/*PCB * next_ = generate_FCFS_next_process(PCBs);
	PCB * next__ = generate_FCFS_next_process(PCBs);
	PCB * next___ = generate_FCFS_next_process(PCBs);
	*/
	while ((next_ = generate_FCFS_next_process(PCBs)) != NULL) {
		next->next_process = next_;
		next = next_;
	}
	return first;
}

void show_status(PCB * process) {

	printf("线程名:%s\t下一个进程名:%s\t需要运行时间:%.3fs\t\n到达时间:%.3f\t优先数:%d\t状态位:%d\t\n",
		process->process_name, process->next_process->process_name, process->run_time_need,
		process->arrive_time, process->prior_number, process->status);

}

void exec_process() {
	struct PCB PCBs[] = { process_1, process_2, process_3, process_4, process_5 };
	PCB * process = generate_FCFS_exec_list(PCBs);
	printf("----------------------------FCFS start--------------------------------------\n");


	while (process != NULL) {
		show_status(process);
		//模拟线程运行
		int countdown = process->run_time_need;
		printf("距离线程结束: ");
		while (countdown >= 0) {
			if (fork() == 0) {
				printf("%ds \n", countdown);
				sleep(1);
				return;
			}
			else {
				wait(NULL);
				countdown--;
			}
		}
		printf("\n");

		process->status = 0; // 执行完线程置0
		process = process->next_process;
	}
	printf("----------------------------FCFS end-----------------------------------\n");
}

void main() {
	struct PCB PCBs[] = { process_1, process_2, process_3, process_4, process_5 };
	exec_process(PCBs);
}

/*
进程名
指针
要求运行时间
到达时间
优先数
状态

以上格式可以用结构体定义。
其中，进程名——作为进程的标识，假设五个进程的进程名分别为P1，P2，P3，P4，P5。
指针——按优先数的大小把五个进程连成队列，用指针指出下一个进程的进程控制块的首地址，最后一个进程中的指针为“0”。
要求运行时间——假设进程需要运行的单位时间数。
到达时间——进程进入系统的时间。
优先数——赋予进程的优先数，调度时总是选取优先数大的进程先执行。
状态——可假设有两种状态，“就绪”状态和“结束”状态。五个进程的初始状态都为“就绪”，用“R”表示，当一个进程运行结束后，它的状态为“结束”，用“E”表示。

*/