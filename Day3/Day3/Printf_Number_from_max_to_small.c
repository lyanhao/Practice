#define _CRT_SECURE_NO_WARNINGS 1

#define NUMBER 3    //Ҫ����������С
#include <stdio.h>
#include <stdlib.h>

int main(){
	int arr[NUMBER] = { 0 };    //��ʼ������
	int i = 0;
	int j = 0;
	int temp = 0;
	//1.����Ҫ���������
	printf("���������֣�");
	for (i = 0; i < NUMBER; i++){
		scanf("%d", &arr[i]);
	}
	//2.ð������
	for (j = 0; j < NUMBER; j++){
		for (i = 0; i < NUMBER - j; i++){
			if (arr[i] < arr[i + 1]){
				temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	//3.��ӡ����
	for (i = 0; i <= NUMBER - 1; i++){
		printf("%d", arr[i]);
	}
	system("pause");
	return 0;
}