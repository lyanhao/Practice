#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Factorial_r(int num) {
	//�ǵݹ�ʵ��
	int k = 1;
	while (num > 0) {
		k *= num--;
	}
	return k;
}

int Factorial(int num) {
	//�ݹ�ʵ��
	return num > 0 ? num * Factorial(num - 1) : 1;
}

int main()
{
	int n = 0;

	printf("������һ�����������Ľ׳�:\n");
	scanf("%d", &n);
	printf("�ݹ���Ϊ%d\n", Factorial(n));
	printf("�ǵݹ���Ϊ%d\n", Factorial_r(n));
	system("pause");
	return 0;
}