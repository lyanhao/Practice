#define _crt_secure_no_warnings 1

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int i = 0;
	int j = 0;
	for (i = 101; i <= 200; i += 2)
	{
		for (j = 2; j <= sqrt(i); j++)
		{
			if (i%j == 0)
			{
				break;
			}
		}
		if (j > sqrt(i))
			{
				printf("%d\n", i);
			}
	}
	system("pause");
	return 0;
}
