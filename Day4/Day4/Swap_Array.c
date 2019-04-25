#define _CRT_SECURE_NO_WARNINGS 1

#define N 5 //自定数组大小
#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr1[N] = { 0 };
	int arr2[N] = { 0 };
	int tmp = 0;
	int i = 0;

	printf("请输入arr1数组元素：\n");
	for (i = 0; i < N; i++) {
		scanf("%d", &arr1[i]);
	}

	printf("请输入arr2数组元素：\n");
	for (i = 0; i < N; i++) {
		scanf("%d", &arr2[i]);
	}

	printf("交换后的数组元素为：\n");
	for (i = 0; i < N; i++) {
		tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = tmp;
	}
	for (i = 0; i < N; i++) {
		printf("%3d", arr1[i]);
	}

	printf("\n");
	for (i = 0; i < N; i++) {
		printf("%3d", arr2[i]);
	}

	printf("\n");
	system("pause");
	return 0;
}
