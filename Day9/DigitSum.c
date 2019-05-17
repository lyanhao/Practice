#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int DigitSum(int n) {
	int i = 0;
	int sum = 0;
	if (n != 0) {
		i = n % 10;
		n = n / 10;
		sum = i + DigitSum(n);
	}
	return sum;
}

int main() {
	int n = 0;
	int num = 0;
	printf("请输入一个非负整数：");
	scanf("%d", &n);
	printf("组成该数字的各个位之和为%d\n：", DigitSum(n));
	system("pause");
	return 0;
}
