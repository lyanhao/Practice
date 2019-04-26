#define _CRT_SECURE_NO_WARNINGS 1
#define MAX 10000

#include <stdio.h>
#include <math.h>

int main() {
	int i = 0; 
	int j = 0;
	int sum = 0, count = 0;
	int tmp[10] = { 0 };

	for (i = 0; i <= MAX; i++) {
		for (j = i; j; j /= 10) {
			tmp[count] = j % 10;
			count++;
		}

		for (j = 0; j < count; j++) {
			sum += pow(tmp[j], count);
		}

		if (i == sum) {
			printf("%d\n", i);
		}
		
		sum = count = 0;
	}
	
	system("pause");
	return 0;
}
