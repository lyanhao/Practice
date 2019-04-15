#define _CRT_SECURE_NO_WARNINGS 1

#define MAX 10000

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Judge(int n){
	int i = 0;
	int tmp = 0;
	tmp = sqrt(n);
	for (i = 2; i <= tmp; i++){
		if (n % i == 0){
			return 0;
		}
	}
	return 1;
}

int main(){
	int i = 0;
	int count = 0;

	for (i = 2; i < MAX; i++){
		if (Judge(i)){
			printf("%4d ", i);
			count++;
			if (count % 10 == 0){
				putchar('\n');
			}
		}
	}
	system("pause");
	return 0;
}
