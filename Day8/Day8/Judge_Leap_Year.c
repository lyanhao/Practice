#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int judgeLeapYear(int y) {
	return y % 400 == 0 || (y % 4 == 0 && y % 100 != 0);
}

int main() {
	int n = 0;
	scanf("%4d", &n);
	printf("%d %d\n", n, judgeLeapYear(n));
	system("pause");
	return 0;
}
