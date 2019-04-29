#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main1() {
	char password[10] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++) {
		printf("请输入密码\n");
		scanf("%s", password);
		if (0 == strcmp(password, "123456")) {
			printf("登录成功\n");
			break;
		}
		else {
			printf("密码错误，请重新输入\n");
		}
	}

	if (3 == i) {
		printf("登录失败\n");
	}
	system("pause");
	return 0;
}
