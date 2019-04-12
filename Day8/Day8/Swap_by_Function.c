#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

void Swap(int* x, int* y){
	int tmp = 0;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

int main(){
	int Num_1 = 0;
	int Num_2 = 0;

	printf("请输入需要交换的两个数字：\n");
	scanf("%d%d", &Num_1, &Num_2);

	Swap(&Num_1, &Num_2);

	printf("交换后的数字为：%d %d\n", Num_1, Num_2);

	system("pause");
	return 0;
}