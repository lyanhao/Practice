#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main()
{	
	int i = 0;
	int j = 0;
	int arr[10] = { 0 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int max = arr[0];

	printf("请输入十个数字：");

	while (i <= (size-1))
	{
		scanf("%d", &arr[i]);
		i++;
	}

	for (j = 1; j <= size; j++)
	{
		if (arr[j] > max)
		{
			max = arr[j];
		}
	}

	printf("max=%d\n", max);
	system("pause");
	return 0;
}