#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//1到100的所有整数中出现多少次数字9

int main() {
	int count = 0;
	int i = 0;

	for (i = 1; i <= 100; i++) {
		if ((i % 10 == 9) || (i / 10 == 9)) {
			count++;
		}
	}

	printf("%d ", count);
	system("pause");
	return 0;
}
