#include<stdio.h>
int main(){
	int arr[7] = { 0 };
	int i = 0;
	for (i = 0; i < 7; i++){
		scanf("%d ", &arr[i]);
	}
	for (i = 0; i < 7; i++){
		printf("%d\n", arr[i]);
	}
	return 0;
}

//#include<stdio.h>
//#include<string.h>
//#include<math.h>
//#include<stdlib.h>
//#include<time.h>
//
////猜数字游戏
////时间戳：当前时间和计算机的起始时间之间的差值，单位是秒
////计算机的起始时间：1970年1月1日 08：00：00
//void game(){
//	//生成随机数（1-100），电脑上的时间是发生变化的，time（）函数返回的是时间戳
//
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	while (1){
//		printf("请猜数字\n");
//		scanf("%d", &guess);
//		if (guess > ret){
//			printf("猜大了\n");
//		}
//		else if (guess < ret){
//			printf("猜小了\n");
//		}
//		else{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//void menu(){
//	printf("**********************\n");
//	printf("****   1. play    ****\n");
//	printf("****   0. exit    ****\n");
//	printf("**********************\n");
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do{
//		menu();
//		printf("请选择(1/0)：");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	srand(time(NULL));
//	return 0;
//}

//检测密码
//int  main(){
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 1; i <= 3; i++){
//		printf("请输入密码：");
//		scanf("%s", &password);
//		if (strcmp(password, "123456") == 0){
//			printf("密码正确\n");
//			break;
//		}
//		else if (i == 3){
//			printf("密码错误，三次机会已用尽\n");
//		}
//		else{
//			printf("密码错误，还有%d次输入机会\n", 3 - i);
//		}
//	}
//	return 0;
//}



//转换大小写
//int main(){
//	char a = 0;
//	while (scanf("%c", &a) != EOF){
//		if (a >= 65 && a <= 90){
//			printf("%c\n", a + 32);
//		}
//		if (a >= 97 && a <= 122){
//			printf("%c\n", a - 32);
//		}
//	}
//	return 0;
//}


//输出三个数字中最大数字
//int main(){
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) != EOF){
//		if (a >= b && a >= c){
//			printf("%d\n", a);
//			continue;
//		}
//		if (b >= a && b >= c){
//			printf("%d\n", b);
//			continue;
//		}
//		if (c >= a && c >= b){
//			printf("%d\n", c);
//			continue;
//		}		
//	}
//	return 0;
//}


//int main(){//复制字符串
//	char arr1[] = "bit";
//	char arr2[20] = { 0 };
//
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main(){//替换字符串
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);//将arr中前五个元素替换成‘x’
//	printf("%s\n", arr);
//	return 0;
//}


//函数传参的时候，实参传递给形参，
//形参是实参的一份临时拷贝，对形参的修改不会影响实参

//int main(){
//	int a = 10;
//	int b = 20;
//	int *pa = &a;
//	int *pb = &b;
//	test1(pa, pb);//传值
//	test2(&pa, &pb);//传址
//	return 0;
//}


//#include<math.h>
//int is_prime(int i){
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++){
//		if (i % j == 0)	{
//			return 0;
//		}
//	}
//	return 1;
//}
//int main(){
//	int i = 0;
//	for (i = 100; i <= 200; i++){
//		if (is_prime(i) == 1){
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int binary_search(int *arr, int k)
//int binary_search(int arr[],int k, int sz){
//	int left = 0;//这里的左右是数组下标
//	int right = sz - 1;
//	while (left <= right){//当左右同时指向一个下标的时候还能找
//		int mid = left + (right - left) / 2;//每次循环重新定义中间值
//		if (arr[mid] > k){
//			right = mid - 1;//缩小范围
//		}
//		else if (arr[mid] < k){
//			left = mid + 1;
//		}
//		else{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main(){
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int k = 0;
//	scanf("%d", &k);
//	//arr是数组，当arr作为参数，传参的时候传的是数组首地址
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);//找到了返回下标，找不到返回-1
//	if (ret == -1){
//		printf("找不到\n");
//	}
//	else{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}