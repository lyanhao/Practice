#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

<<<<<<< HEAD
//1¡¢1¡¢2¡¢3¡¢5¡¢8¡¢13¡¢21¡¢34¡¢¡­¡­
// F(n)=F(n-1)+F(n-2)£¨n>=3£¬n¡ÊN*£©

//not recursive
=======
//1ã€1ã€2ã€3ã€5ã€8ã€13ã€21ã€34ã€â€¦â€¦
// F(n)=F(n-1)+F(n-2)ï¼ˆn>=3ï¼ŒnâˆˆN*ï¼‰
///not recursive
>>>>>>> fb433d4bfb805eca6d723f9e578c96325810c1f1
int fib1(int n){
	int an = 0, an_1 = 1, an_2 = 1, i = 0;

	if (n <= 2){
		return 1;
	}

	for (i = 2; i < n; i++){
		an = an_1 + an_2;
		an_2 = an_1;
		an_1 = an;
	}
	return an;
}

//recursive
int fib2(int n){
	if (n <= 2){
		return 1;
	}
	return fib2(n - 1) + fib2(n - 2);
}

int main(){
	int n = 0;
<<<<<<< HEAD
	printf("ÇëÊäÈëÄãÒª²éÑ¯µÚ¼¸¸öì³²¨ÄÇÆõÊý£º");
	scanf("%d",&n);
	printf("%d\n", fib2(n));


	system("pause");
	return 0;
}
=======
	printf("è¯·è¾“å…¥ä½ è¦æŸ¥è¯¢ç¬¬å‡ ä¸ªæ–æ³¢é‚£å¥‘æ•°ï¼š");
	scanf("%d",&n);
	printf("%d\n", fib2(n));
	system("pause");
	return 0;
}
>>>>>>> fb433d4bfb805eca6d723f9e578c96325810c1f1
