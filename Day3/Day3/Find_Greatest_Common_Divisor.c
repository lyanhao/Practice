#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int Greatest_Common_Divisor(int a, int b) {
	if (b == 0) 
		return a;
	else return Greatest_Common_Divisor(b, a%b);
}

int main() {
	int a, b;
	while (scanf("%d%d", &a, &b) != 0) {
	printf("%d\n", Greatest_Common_Divisor(a, b));
	}
	system("pause");
	return 0;
}
