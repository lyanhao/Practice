#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

void Reverse_String(char *string) {
	if (*string != '\0')
	{
		string++;
		Reverse_String(string);
		printf("%c", *(string - 1));
	}

}

int main() {
	char ch[20] = { 0 };
	gets(ch);
	Reverse_String(ch);
	system("pause");
	return 0;
}