//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <stdlib.h>
//
////计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值
//
//int main(){
//	int i = 0;
//	int j = 0;
//	float Odd_Num = 0.0;   //定义奇数分母
//	float Even_Num = 0.0;  //定义偶数分母
//	float Sum = 0.0;       //定义和值
//	
//	//计算奇数分母的所有数总和的值
//	for (i = 1; i <= 100; i += 2){
//		Odd_Num += 1.0 / i;
//	}
//
//	//计算偶数分母的所有数总和的值
//	for (j = 2; j <= 100; j += 2){
//		Even_Num += 1.0 / j;
//	}
//
//	//求总和
//	Sum = Odd_Num - Even_Num;
//
//	printf("%f", Sum);
//	system("pause");
//	return 0;
//}