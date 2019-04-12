#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

void Print_Mul(int n){
	int i = 0;
	int j = 0;

	for (i = 1; i <= n; i++){
		for (j = 1; j <= i; j++){
			printf("%d*%d=%-2d ", j, i, i * j);
		}
		putchar('\n');
	}
}

int main(){
	int n, i, j;

	scanf("%d", &n);
	Print_Mul(n);
	system("pause");
	return 0;
}