#include<stdio.h>
#include<math.h>
#include<windows.h>
#include<string.h>
int main(){
	float f = 5.5;
	//101.1   1.011*2^2;
	//-1^0*2*1.011*2^2
	//s = 0  m = 1.011    e = 2
	//2+127 = 129
	//0100 0000 1011 0000 0000 0000 0000 0000
	//40  B0  00 00
	return 0;
}


//int main(){
//	int n = 9;
//	float *pFloat = (float*)&n;
//	printf("%d\n", n);  //  9
//	printf("%f\n", *pFloat);//0.0
//	*pFloat = 9.0;
//	printf("%d\n", n);// 
//	printf("%f\n", *pFloat);// 9.0
//	return 0;
//}


//int main(){
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++){
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}


//10000000000000000000000000010100——  -20
//11111111111111111111111111101011——  反码
//11111111111111111111111111101100——补码
//00000000000000000000000000001010——  10
//11111111111111111111111111110110—— 相加
//10000000000000000000000000001001—— 取反
//10000000000000000000000000001010——  加一  ——   -10
//int main(){
//	int a = -20;
//	unsigned int b = 10;
//	printf("%d\n", a + b);
//	return 0;
//}


//死循环， 无符号数永远不会小于0
//int main(){
//	unsigned int i;
//	for (i = 9; i >= 0; i--){
//		printf("%u\n", i);
//		Sleep(1000);
//	}
//	return 0;
//}


//int main(){
//	char a= -128;
//	//10000000000000000000000010000000 ——  -128
//	//11111111111111111111111101111111——  取反成反码
//	//11111111111111111111111110000000——  加一成补码
// //char只能读到10000000一个字节
// //11111111111111111111111110000000——自动填充符号位
//	printf("%d\n", a);
//	return 0;
//}
//


//int main(){
//	char a = 128;
//	//00000000000000000000000010000000
//	//10000000-因为是char所以读到这么多
//	//11111111111111111111111110000000-自动填充符号位
//	printf("%d\n", a);
//	return 0;
//}


//int main(){
//	unsigned char a = -1;
//	//11111111
//	//00000000000000000000000011111111
//	//255
//	printf("%d\n", a);
//	return 0;
//}


//void check_sys(){
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1){
//		printf("小端\n");     //return 1 -小断
//	}
//	else{
//		printf("大端\n");	  //return 0 -大端
//	}
//}
//int main(){
//	check_sys();
//	return 0;
//}


//int main(){
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1){
//		printf("小端字节序存储方式\n");
//	}
//	else{
//		printf("大端字节序存储方式\n");
//	}
//	return 0;
//}


//打印菱形
//int main(){
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	for (i = 0; i < line; i++){
//		int j = 0;
//		for (j = 0; j < line -1 - i; j++){
//			printf(" ");
//		}
//		for (j = 0; j < 2 * i + 1; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++){
//		int j = 0;
//		for (j = 0; j <= i; j++){
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//求出0-100000之间的水仙花数
//int main(){
//	int i = 0;
//	for (i = 0; i <= 100000; i++){
//		//判断i是否为自幂数
//		//1.计算i的位数   2.获取i的每一位并计算每一位的n次方只和  3.判断并输出
//		int  tmp = i;
//		int sum = 0;
//		int n = 1;
//		while (tmp / 10){
//			n++;//位数
//			tmp /= 10;
//		}
//		tmp = i;
//		while (tmp){
//			sum += (int)pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i){
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}