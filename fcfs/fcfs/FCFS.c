#include "define_process.h"

/*
������Ҫ���е�һ������, ���˽��̵�״̬�ı�
*/
PCB * generate_FCFS_next_process(PCB * PCBs) {
	int prior_number = 5;
	double min_arrive_time =
		PCBs[PCBs_length - 1].arrive_time; // ʣ������һ����������Ƚ�
										   // �õ���С����ʱ��
	int i;
	for (i = 0; i < PCBs_length - 1; i++) {
		if (PCBs[i].prior_number != 0) {
			// ˵���Ѿ��������ȼ���
			prior_number--;
			continue; //�ų��˽���
		}
		min_arrive_time = PCBs[i].arrive_time;
		for (int j = i + 1; j < PCBs_length; j++) {
			if (PCBs[j].prior_number != 0) {
				// ˵���Ѿ��������ȼ���
				prior_number--;
				continue; //�ų��˽���
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

	// Ѱ�����絽��ʱ���Ӧ�Ľ���
	for (int i = 0; i < PCBs_length; i++) {
		if (PCBs[i].prior_number != 0) {
			// ˵���Ѿ��������ȼ���
			continue; //�ų��˽���
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
���ݵ���ʱ�������߳�ִ�ж���
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

	printf("�߳���:%s\t��һ��������:%s\t��Ҫ����ʱ��:%.3fs\t\n����ʱ��:%.3f\t������:%d\t״̬λ:%d\t\n",
		process->process_name, process->next_process->process_name, process->run_time_need,
		process->arrive_time, process->prior_number, process->status);

}

void exec_process() {
	struct PCB PCBs[] = { process_1, process_2, process_3, process_4, process_5 };
	PCB * process = generate_FCFS_exec_list(PCBs);
	printf("----------------------------FCFS start--------------------------------------\n");


	while (process != NULL) {
		show_status(process);
		//ģ���߳�����
		int countdown = process->run_time_need;
		printf("�����߳̽���: ");
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

		process->status = 0; // ִ�����߳���0
		process = process->next_process;
	}
	printf("----------------------------FCFS end-----------------------------------\n");
}

void main() {
	struct PCB PCBs[] = { process_1, process_2, process_3, process_4, process_5 };
	exec_process(PCBs);
}

/*
������
ָ��
Ҫ������ʱ��
����ʱ��
������
״̬

���ϸ�ʽ�����ýṹ�嶨�塣
���У�������������Ϊ���̵ı�ʶ������������̵Ľ������ֱ�ΪP1��P2��P3��P4��P5��
ָ�롪�����������Ĵ�С������������ɶ��У���ָ��ָ����һ�����̵Ľ��̿��ƿ���׵�ַ�����һ�������е�ָ��Ϊ��0����
Ҫ������ʱ�䡪�����������Ҫ���еĵ�λʱ������
����ʱ�䡪�����̽���ϵͳ��ʱ�䡣
����������������̵�������������ʱ����ѡȡ��������Ľ�����ִ�С�
״̬�����ɼ���������״̬����������״̬�͡�������״̬��������̵ĳ�ʼ״̬��Ϊ�����������á�R����ʾ����һ���������н���������״̬Ϊ�����������á�E����ʾ��

*/