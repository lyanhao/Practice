#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//�ǵݹ飺
int Strlen1(char* str)
{
	int i = 0;
	while (*str != '\0')
	{
		++str;
		++i;
	}
	return i;
}

//�ݹ飺
int Strlen2(char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	else
	{
		return 1 + Strlen2(++str);
	}
}

int main()
{
	char str[] = "abcdefgh";
	printf("%d\n", Strlen1(str));
	printf("%d\n", Strlen2(str));
	system("pause");
	return 0;
}
