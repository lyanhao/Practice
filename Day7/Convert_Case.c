#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <math.h>

int main() {

	int ch;
	printf("ÇëÊäÈëÒ»¸ö×Ö·û:\n");

	while ((ch = getchar()) != EOF) {
		if (ch >= 'a'&&ch <= 'z')
			printf("%c\n", ch - 32);
		else
		if (ch >= 'A'&&ch <= 'Z')
			printf("%c\n", ch + 32);
		else
		if (ch >= '0'&&ch <= '9')
			;
		else
			;
	}
	printf("\n");

	system("pause");
	return 0;
}
