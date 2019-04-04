#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

void Swap_without_temp(int* x, int* y)
{
	*x = *x + *y;//i=3+2=5
	*y = *x - *y;//j=5-2=3
	*x = *x - *y;//i=5-3=2
}
int main()
{
	int num_1 = 0; 
	int num_2 = 0;
	printf("请输入两个数num_1，num_2\n");
	scanf("%d %d", &num_1, &num_2);//例如i=3，j=2
	printf("交换前Num1=%d，Num2=%d\n",num_1, num_2);
	Swap_without_temp(&num_1, &num_2);
	printf("交换后Num1=%d，Num2=%d\n", num_1, num_2);
	system("pause");
	return 0;
}
