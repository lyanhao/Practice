#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

int main1(){
	char password[10] = { 0 };
	int i = 0;
	for (i = 0; i < 3; i++){
		printf("ÇëÊäÈëÃÜÂë\n");
		scanf("%s", password);
		if (0 == strcmp(password, "123456")){
			printf("µÇÂ¼³É¹¦\n");
			break;
		}
		else{
			printf("ÃÜÂë´íÎó£¬ÇëÖØÐÂÊäÈë\n");
		}
	}

	if (3 == i){
		printf("µÇÂ¼Ê§°Ü\n");
	}
	system("pause");
	return 0;
}
