#include<stdio.h>
//递归求斐波那契数
//int Fib(int n){
//	if (n < 3){
//		return 1;
//	}
//	else{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//非递归求斐波那契数
//int Fib(int n){
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


//Exponential function指函数
//int Exp(int n, int k){
//	static int ret = 1;
//	if (k > 1){
//		Exp(n, k - 1);
//	}
//	return ret *= n;
//}
//int main(){
//	int n = 0;
//	int k = 0;
//	scanf("%d%d", &n, &k);
//	printf("%d\n", Exp(n, k));
//	return 0;
//}


//计算一个非零整数的每位之和
//int DigitSum(int  n){
//	static int sum = 0;//只初始化一次
//	if (n > 10){
//		DigitSum(n / 10);
//	}
//	sum += n % 10;
//	return sum;
//}
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", DigitSum(n));
//	return 0;
//}


//int mystrlen(char *str){//计算字符串长度
//	if (*str != '\0'){
//		return 1 + mystrlen(str + 1);
//	}
//	else{
//		return 0;
//	}
//}
//void reverse_string(char *string){//递归逆序字符串
//	int len = mystrlen(string);
//	char tmp = *string;
//	*string = *(string + len - 1);
//	*(string + len - 1) = '\0';
//	if (mystrlen(string + 1) >= 2){
//		reverse_string(string + 1);
//	}
//	*(string + len - 1) = tmp;
//}
//int main(){
//	char arr[] = "abcdef";
//	printf("逆序前：%s\n", arr);
//	reverse_string(arr);
//	printf("逆序后：%s\n", arr);
//}


//递归实现strlen
//int mystrlen(char *str){
//	if (*str != '\0'){
//		return 1 + mystrlen(str + 1);
//	}
//	else{
//		return 0;
//	}
//}
//int main(){
//	char arr[] = "wuhuqifei123";
//	int len = mystrlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//int mystrlen(char *str){
//	static int count = 0;
//	if (*str != '\0'){
//		mystrlen(str + 1);
//	}
//	return count++;
//}
//int main(){
//	char arr[] = "wuhuqifei123";
//	int len = mystrlen(arr);
//	printf("%d\n", len);
//	return 0;
//}
//非递归实现strlen
//int mystrlen(char *str){
//	int count = 0;
//	while (*str != '\0'){
//		count++;
//		str++;
//	}
//	return count;
//}
//int main(){
//	char arr[] = "wuhuqifei";
//	int len = mystrlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//非递归求n的阶乘
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	while (n > 1){
//		ret *= n;
//		n--;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//递归求n的阶乘
//int Fac(int n){
//	if (n > 1){
//		return n*Fac(n - 1);
//	}
//	else{
//		return 1;
//	}
//}
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", Fac(n));
//	return 0;
//}



//递归的打印输入数的每一位
//void  print(int n){
//	if (n >= 10){
//		print(n / 10);
//	}
//		printf("%d ", n%10);
//}
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}


//int main(){
//	int arr[4] = { 1, 2, 3, 4 };
//	printf("%p\n", arr);//数组首地址
//	printf("%p\n", &arr);//数组首地址
//	printf("%p\n", &arr[0]);//数组首元素地址
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr + 1);
//	printf("%p\n", &arr[0] + 1);//给整个地址加1，数组加1，这个数组是16个字节就加了16
//	return 0;
//}


//void print(int arr[3][5], int row, int col){
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++){
//		for (j = 0; j < col; j++){
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//int  main(){
//	int arr[3][5] = { 1, 2, 3, 4, 5, 2, 3, 4, 5, 6, 3, 4, 5, 6, 7 };
//	print(arr, 3, 5);
//	return 0;
//}


//数组名是数组首元素的地址，但有两个例外
//1.sizeof(数组名) - 数组名标志的整个数组，计算的是整个数组
//2.&数组名，数组名表示整个数组，取出的是整个数组的地址


//冒泡法排序
//本质-void bubble_sort(int *arr)
//void bubble_sort(int arr[], int sz){
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++){
//		int flag = 1;//假设已经有序
//		for (j = 0; j < sz - 1 - i ; j++){//j会随着i的变化而变化，冒泡法10个元素需要比较9次
//			if (arr[j] > arr[j + 1]){
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//发现还不是有序
//			}
//		}
//		if (flag == 1){//判断是否发生交换，若没有发生交换跳出
//			break;
//		}
//	}
//}
//
//int main(){
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//数组传参的时候，数组名是首元素的地址
//	bubble_sort(arr, sz);
//	for (i = 0; i < 10; i++){
//		printf("%d", arr[i]);
//	}
//	return 0;
//}


//int main(){
//	//int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };默认从arr[0][0]开始放入元素先行后列
//	int arr[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7 }, 8, 9, 10 };//可以指定放入元素
//	//int arr[ ][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//行下标可以省略，列下标不能省略
//	//int arr[3][ ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//行下标可以省略，列下标不能省略
//	int i = 0;
//	int j = 0;


//证明指针存储是连续的
//int main(){
//	int arr[3][4] = { 1, 2, 3, 4, 2, 3, 4, 5, 3, 4, 5, 6 };
//	int *p = &arr[0][0];
//	int i = 0;
//	for (i = 0; i < 12; i++){
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


	//for (i = 0; i < 3; i++){
	//	for (j = 0; j < 4; j++){
	//		scanf("%d", &arr[i][j]);
	//	}
	//}
	//for (i = 0; i < 3; i++){
	//	for (j = 0; j < 4; j++){
	//		//二维数组在内存中存储的地址也是连续的
	//		printf("arr[%d][%d]=%d &arr[%d][%d]=%p\n", i, j, arr[i][j], i, j, &arr[i][j]);
	//	}
	//}
//	return 0;
//}