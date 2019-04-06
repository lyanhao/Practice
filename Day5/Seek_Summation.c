#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Sn=a+aa+aaa+aaaa+aaaaa

int main(){
	int i = 0;
	int n = 0;
	int sum = 0, tmp = 0;

	scanf("%d", &n);

	for (i = 0; i < 5; i++)
	{
		tmp = tmp * 10 + n;
		sum += tmp;
	}

	printf("%d\n", sum);
	system("pause");
	return 0;
}