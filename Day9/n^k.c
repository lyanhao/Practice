#define _CRT_SECURE_NO_WARNINGS 1
#include <stdint.h>
#include <stdlib.h>

int function(int n, int k) {
	int sum = 0;
	if (k == 0) {
		sum = 1;
	}
	else {
		sum = n * function(n, k - 1);
	}
	return sum;
}

int main() {
	int bot = 0;
	int ind = 0;
	scanf("%d%d", &bot, &ind);
	printf("%d", function(&bot, &ind));
	system("pause");
	return 0;
}
