#include<stdio.h>
#include<string.h>
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
//int main(){
//	int money = 20;
//	int bottle = 0;
//	int soda = 0;
//	soda = money;
//	bottle = soda;
//	while (bottle > 1){
//		soda += bottle / 2;
//		bottle = bottle / 2 + bottle % 2;
//	}
//	printf("%d\n", soda);
//	return 0;
//}


//方法二：按照上述喝水和用瓶子换的规则的话，可以发现，其实就是个等差数列：money * 2 - 1
//int main(){
//	int money = 0;
//	int soda = 0;
//	int bottle = 0;
//	scanf("%d", &money);
//	if (money <= 0){
//		soda = 0;
//	}
//	else{
//		soda = money * 2 - 1;
//	}
//	printf("soda = %d\n", soda);
//	return 0;
//}



//打印菱形
//int main(){
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 7; i++){
//		for (j = 0; j < 7 - i - 1; j++){
//			printf(" ");
//		}
//		for (j = 0; j <2 * i + 1; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 6; i++){
//		for (j = 0; j < i + 1; j++){
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (6 - i) - 1; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main(){
//	char arr[] = "*************";
//	char left = arr;
//	char right = strlen(arr) - 1;
//	int i = 0;
//	for ()
//	return 0;
//}


//#include<assert.h>
////assert-断言--括号中的表达式为真，什么都不发生，括号中的表达式为假就会报错
//void mystrcpy(char* dest, char* src){
//	while (*dest++ = *src++){
//		;
//	}
//}
//int main(){
//	char arr1[10] = "歪比歪比";
//	char arr2[10] = "歪比巴卜";
//	printf("%s\n", arr1);
//	mystrcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
////模拟strcpy
//void mystrcpy(char* dest, char* src){
//	while (*dest++ = *src++){
//		;
//	}
//}
//int main(){
//	char arr1[20] = "qqqqqqqqqqqq";
//	char arr2[] = "abcdef";
//	mystrcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}