#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

void Swap(int* x, int* y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
int main1()
{
	int num_1 = 0;
	int num_2 = 0;
	printf("������num1��ֵ��");
	scanf("%d",&num_1);
	printf("������num2��ֵ��");
	scanf("%d", &num_2);
	printf("����ǰNum1=%d,Num2=%d\n", num_1, num_2);
	Swap(&num_1, &num_2);
	printf("������Num1=%d,Num2=%d\n", num_1, num_2);
	system("pause");
	return 0;
}