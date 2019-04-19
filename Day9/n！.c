#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Factorial_r(int num) {
	//非递归实现
	int k = 1;
	while (num > 0) {
		k *= num--;
	}
	return k;
}

int Factorial(int num) {
	//递归实现
	return num > 0 ? num * Factorial(num - 1) : 1;
}

int main()
{
	int n = 0;

	printf("请输入一个数，求他的阶乘:\n");
	scanf("%d", &n);
	printf("递归结果为%d\n", Factorial(n));
	printf("非递归结果为%d\n", Factorial_r(n));
	system("pause");
	return 0;
}