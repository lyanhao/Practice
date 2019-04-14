#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//1、1、2、3、5、8、13、21、34、……
// F(n)=F(n-1)+F(n-2)（n>=3，n∈N*）
///not recursive
int fib1(int n){
	int an = 0, an_1 = 1, an_2 = 1, i = 0;

	if (n <= 2){
		return 1;
	}

	for (i = 2; i < n; i++){
		an = an_1 + an_2;
		an_2 = an_1;
		an_1 = an;
	}
	return an;
}

//recursive
int fib2(int n){
	if (n <= 2){
		return 1;
	}
	return fib2(n - 1) + fib2(n - 2);
}

int main(){
	int n = 0;
	printf("请输入你要查询第几个斐波那契数：");
	scanf("%d",&n);
	printf("%d\n", fib2(n));


	system("pause");
	return 0;
}
