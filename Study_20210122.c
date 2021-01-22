//汉诺塔问题
//青蛙跳台阶
#include<stdio.h>
#include<string.h>
#include<math.h>
//#include"func.h"

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
void Mft(int n){   //Mft--Multiplication formula table
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++){
		for (j = 1; j <= i; j++){
			printf("%d*%d=%3d ", i, j, i*j);//预留三个空格让表格看起来整齐
		}
		printf("\n");
	}
}  
int main(){
	int n = 0;
	scanf("%d", &n);
	Mft(n);
	return 0;
}


//实现一个函数来交换两个整数的内容
//void exchange(int *px, int *py){
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main(){
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	printf("交换前：%d %d\n", x, y);
//	exchange(&x, &y);
//	printf("交换后：%d %d\n", x, y);
//	return 0;
//}



//判断闰年函数
//void leapyear(int year){
//	if (year % 4 == 0 && year % 100 != 0){//整除4且不整除100
//		printf("%d是闰年\n", year);
//	}
//	else if (year % 400 == 0){//整除400
//		printf("%d是闰年\n", year);
//	}
//	else{
//		printf("%d不是闰年\n", year);
//	}
//}
//int main(){
//	int year = 0;
//	while (scanf("%d", &year) != EOF){//可以循环输入查询
//		leapyear(year);
//	}
//	return 0;
//}


//判断100到200之间的数字是否为素数
//int prime(int i){
//	int n = 0;
//	for (n = 2; n <= sqrt(i); n++){  //sqrt-开方，如果i是合数那么在它开方数之下一定有数字能整除它
//		if (i % n == 0){
//			return 0;
//		}
//	}//当所有满足条件的n判断完之后还没有return 0，执行return 1
//	return 1;
//}
//int main(){
//	int i = 0;
//	for (i = 101; i <= 200; i+=2){  //偶数不可能是素数
//		if (prime(i) == 1){
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//#include<windows.h>
//int main(){
//	char arr1[] = "welcome to bit!!!!!";
//	char arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1) - 1;
//	while (left <= right){
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//单位为毫秒
//		system("cls");//cls clear screen清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//公务员面试现场打分。有7位考官，从键盘输入若干组成绩，每组7个分数（百分制），去掉一个最高分和一个最低分，输出每组的平均成绩
//int main(){
//	int arr[7] = { 0 };
//	int i = 0;
//
//	float score = 0;
//	for (i = 0; i < 7; i++){
//		scanf("%d", &arr[i]);//输入七个数字到数组
//		score += arr[i];//计算成绩总数
//	}
//	int max = arr[0];
//	int min = arr[0];
//	for (i = 1; i < 7; i++){//求出7个数字中的最大值和最小值
//		if (max < arr[i]){
//			max = arr[i];
//		}
//		if (min > arr[i]){
//			min = arr[i];
//		}
//	}
//	score = (score - (max + min)) / 5;//减去最高分和最低分之后的平均分
//	printf("%.2f\n", score);//输出平均分保留小数点后两位
//	return 0;
//}


//输入年份月份输出该年该月的天数
//int leapyear(int i){
//	switch (i){
//	case 1:
//		return 31;
//	case 2:
//		return 29;
//	case 3:
//		return 31;
//	case 4:
//		return 30;
//	case 5:
//		return 31;
//	case 6:
//		return 30;
//	case 7:
//		return 31;
//	case 8:
//		return 31;
//	case 9:
//		return 30;
//	case 10:
//		return 31;
//	case 11:
//		return 30;
//	case 12:
//		return 31;
//	}
//	return 0;
//}
//int commonyear(int i){
//	switch (i){
//	case 1:
//		return 31;
//	case 2:
//		return 28;
//	case 3:
//		return 31;
//	case 4:
//		return 30;
//	case 5:
//		return 31;
//	case 6:
//		return 30;
//	case 7:
//		return 31;
//	case 8:
//		return 31;
//	case 9:
//		return 30;
//	case 10:
//		return 31;
//	case 11:
//		return 30;
//	case 12:
//		return 31;
//	}
//	return 0;
//}
//int main(){
//	int year = 0;
//	int month = 0;
//	int i = 0;
//	while (scanf("%d %d", &year, &month) != EOF){
//		if ((year % 4 == 0) && (year % 100) != 0){
//			i = leapyear(month);
//			printf("%d\n", i);
//		}
//		else if (year % 400 == 0){
//			i = leapyear(month);
//			printf("%d\n", i);
//		}
//		else{
//			i = commonyear(month);
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}


//VS2013数组括号[ ]中必须是常量，不能是变量
//int main(){
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++){
//		printf("&arr[%d] = %p\n", i, &arr[i]);//数组在内存中是连续存放的
//	}
//	return 0;
//}


//递归求斐波那契数1 1 2 3 5 8 13 21 34 55，效率低下，算法复杂度太大
//int Fib(int n){
//	if (n <= 2){
//		return 1;
//	}
//	else{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int Fib(int n){//循环求斐波那契数
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2){
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}


//int Fac(int n){
//	if (n > 1){//终止条件
//		return n * Fac(n - 1);//每层的n-1使得n越来越接近终止条件，且符合阶乘思想
//	}
//	else{//最里层执行的语句，当n减到为1时，返回1，是为阶乘1*2*3*...*n
//		return 1;
//	}
//}
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fac(n);
//	printf("%d\n", ret);
//	return 0;
//}


//传统循环想法
//int my_strlen(char* str){
//	int count = 0;
//	while(*str != '\0'){
//		count++;
//		str++;
//	}
//}
//递归
//int my_strlen(char* str){
//	if (*str != '\0'){//递归终止条件，判断是否遇到字符串尾部的\0
//		return 1 + my_strlen(str + 1);
//	}//层层进入，直到遇到 '\0'执行else，再返回0+1+1+1+1+1+1，最后返回6
//	else{
//		return 0;
//	}
//}
////my_strlen("abcdef")
////1 + my_strlen("bcdef")
////1 + 1 + my_strlen("cdef")
////1 + 1 + 1 + my_strlen("def")
////1 + 1 + 1 + 1 + my_strlen("ef")
////1 + 1 + 1 + 1 + 1 + my_strlen("f")
////1 + 1 + 1 + 1 + 1 + 1 + my_strlen("")
////1 + 1 + 1 + 1 + 1 + 1 + 1
//int main(){
//	char arr[] = "abcdef";//数组名是首元素的地址-char*
//	int len = my_strlen(arr);//进入函数，开始递归
//	printf("数组中有%d个元素\n", len);
//	return 0;
//}


//递归地打印输入数字的每一位
//void print(int n){
//	if (n > 9){//作为递归终止的条件，在最里层不能满足才可以执行接下来的代码
//		print(n / 10);//递归的进入一层又一层，越来越接近终止的条件
//	}
//	//在最里层 n !> 9时，执行这句话然后返回上一层的print函数之后
//	printf("%d ", n % 10);
//}
//int main(){
//	int  num = 0;
//	scanf("%d", &num);//1234
//	//打印num的每一位    1   2   3   4  
//	print(num);//printf函数可以把num的每一位打印在屏幕上
//	//print(1234)
//	//print(123)  4
//	//print(12)  3  4
//	//print(1)  2  3  4
//	//1  2  3  4
//	return 0;
//}


//错误的递归，无休止的调用自己，栈溢出
//int main(){
//	printf("歪比巴卜\n");
//	main();
//	return 0;
//}

//int main(){
//	three_line();
//	return 0;
//}

//int main(){
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d\n", mul(a));//mul-mulifly乘法
//	return 0;
//}