#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main1(){
	char password[10] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++){
		printf("����������\n");
		scanf("%s", password);
		if (0 == strcmp(password, "123456")){
			printf("��¼�ɹ�\n");
			break;
		}
		else{
			printf("�����������������\n");
		}
	}

	if (3 == i){
		printf("��¼ʧ��\n");
	}
	system("pause");
	return 0;
}
