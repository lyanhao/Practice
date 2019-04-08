#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int search(int arr[], int key, int left, int right){
	while (left <= right){
		int mid = left + (right - left) / 2;

		if (arr[mid] > key){
			right = mid - 1;
		}
		if (arr[mid] < key){
			left = mid + 1;
		}
		if (arr[mid] == key){
			return mid;
		}
	}
	return -1;
}

int main(){

	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int key = 0;

	printf("请输入要找的数:");
	scanf("%d", &key);

	int sz = sizeof(arr) / sizeof(arr[0]) - 1;

	int ret = search(arr, key, 0, sz);
	if (ret == -1){
		printf("找不到\n");
	}
	else{
		printf("找到了：%d\n", ret);
	}
	system("pause");
	return 0;
}