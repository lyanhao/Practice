#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void meun(){
	printf("**************************\n");
	printf("******    1.play    ******\n");
	printf("******    0.exit    ******\n");
	printf("**************************\n");
}

void game(int s){
	int b = 0;
	printf("��������µ�ֵ��\n");
	while (1){
		scanf("%d", &b);
		if (s > b){
			printf("��С��\n");
		}
		if (s < b){
			printf("�´���\n");
		}
		if (s == b){
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}

	}

}

int main(){
	srand((unsigned)time(0));
	int s = rand() % 100;
	int a = 0;

	do{
		meun();
		scanf("%d", &a);
		if (a == 1){
			game(s);
		}
	}while (a != 0);

	return 0;
}