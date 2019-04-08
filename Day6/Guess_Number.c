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
	printf("请输入你猜的值：\n");
	while (1){
		scanf("%d", &b);
		if (s > b){
			printf("猜小了\n");
		}
		if (s < b){
			printf("猜大了\n");
		}
		if (s == b){
			printf("恭喜你，猜对了！\n");
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