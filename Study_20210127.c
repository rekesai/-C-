#include<stdio.h>
#include<string.h>
#include<math.h>
//求出0～100000之间的所有水仙花数并输出。
//水仙花数是指一个n位数，其各位数字的n次方之和确好等于该数本身
//如:153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个水仙花数
int main(){
	int num = 0;
	for (num = 0; num < 100000; num++){
		int count = 1;
		int sum = 0;
		int tmp = num;
		while (tmp / 10){//判断几位数
			count++;
			tmp = tmp / 10;
		}
		tmp = num;
		while (tmp){//计算个位次方和
			sum += pow(tmp % 10, count);
			tmp = tmp / 10;
		}
		if (sum == num){//判断是否水仙数
			printf("%d ", num);
		}
	}
	return 0;
}




//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//int main(){
//	int num1 = 0;
//	scanf("%d", &num1);
//	int num2 = num1;
//	int sum = num1;
//	int i = 0;
//	for (i = 1; i < 5; i++){
//		num2 = num2 * 10 + num1;
//		sum += num2;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//写一个函数，可以逆序一个字符串的内容
//void reverse(char* str, int count){
//	char* p = str;
//	int i = 0;
//	for (i = count -1 ; i >= 0; i--){
//		printf("%c", *(p+i));
//	}
//}
//int main(){
//	char str[100] = {0};
//	gets(str);
//	int count = strlen(str);
//	reverse(str,count);
//	return 0;
//} 


//写一个函数，可以逆序一个字符串的内容
//void Reverse(char* str)
//{
//	char* left = str;
//	char* right = str + strlen(str) - 1;
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		++left;
//		--right;
//	}
//}
//int main()
//{
//	char str[] = "hello bit";
//	//在这里完成下面函数，参数自己设计，要求：使用指针
//	Reverse(str);
//	return 0;
//}
// 若要考虑循环输入，因为每个算法可能有多组测试用例进行验证
//int main()
//{
//	char str[101] = { 0 };
//	while (gets(str))
//	{
//		Reverse(str);
//		printf("%s\n", str);
//		memset(str, 0, sizeof(str) / sizeof(str[0]));
//	}
//	return 0;
//}



//写一个函数打印arr数组的内容，不使用数组下标，使用指针。arr是一个整形一维数组。
//void print(int arr[], int sz){
//	int * p = arr;
//	int i = 0;
//	for (i = 0; i < sz; i++){
//		printf("%d ", *p);
//		p++;
//	}
//}
//int main(){
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}


//void print(int arr[]){
//	int i = 0;
//	for (i = 0; i < 10; i++){
//		printf("%d ", arr[i]);
//	}
//}
//int main(){
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	print(arr);
//	return 0;
//}


//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//void fun(struct stu *p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//int main()
//{
//	struct stu students[3] = { { 9801, "zhang", 20 }, { 9802, "wang", 19 }, { 9803, "zhao", 18 }};
//	fun(students + 1);
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };//int类型是4个字节
//	short *p = (short*)arr;//short是2个字节
//	int i = 0;
//	for (i = 0; i<4; i++)//这里循环4次所以改动的是arr前两个元素的分别前后部分
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);//打印00345
//	}
//	return 0;
//}
//
//
////每一次函数调用，都要在栈区上为函数分配空间
//int Add(int x, int y){
//	int z = x + y;
//	return z;
//}
//int main(){
//	int a = 10;
//	int b = 20;
//	int ret = Add(a, b);
//	return 0;
//}


//struct Point{
//	int x;
//	int y;
//};
//struct S{
//	char arr[10];
//	struct Point p;
//	double d;
//};
//void print1(struct S ss){
//	printf("%s %d %d %lf\n", ss.arr, ss.p.x, ss.p.y, ss.d);
//}
//void print2(struct S* ps){
//	printf("%s %d %d %lf\n", ps->arr, ps->p.x, ps->p.y, ps->d);
//}
//int main(){
//	struct S s = { "hello bit", { 100, 200 },  99.8 };
//	print1(s);//print函数来打印结构体数据
//	print2(&s);
//	return 0;
//}



//int main(){
//	char* p = "abcdef";
//	printf("%s\n", p);
//	//字符指针的数组
//	char* arr[] = { "abcdef", "hello", "bit" };//arr[1],arr[2],arr[3]
//	int i = 0;
//	for (i = 0; i < 3; i++){
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}


//int main(){
//	int a = 10;
//	int* p = &a;//一级指针
//	int * * pp = &p;
//	return 0;
//}


//int main(){
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int* p = arr;//首元素地址
//	int i = 0;
//	for (i = 0; i < 5; i++){
//		printf("%d ", *(p+i));//每次给首元素的+i
//	}
//	return 0;
//}


//求字符串长度
//int mystrlen(char* str){
//	char* start = str;
//	while (*str != '\0'){
//		str++;
//	}
//	return str - start;
//}
//int main(){
//	char arr[] = "abcdef";
//	int len = mystrlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//int main(){
//	int arr[10] = { 0 };
//	// 指针-指针   得到的是指针和指针之间的元素个数
//	//前提是两个指针指向的是同一块连续空间
//	printf("%d\n", &arr[9] - &arr[0]);
//	return 0;
//}

//int* test(){
//	int a = 10;
//	return &a;
//}
//int main(){
//	int* p = test();
//	printf("hehe\n");
//	printf("%d\n", *p);
//	return 0;
//}


//int main(){
//	int arr[10] = { 0 };
//	int * p = arr;
//	int i = 0;
//	//可以通过指针灵活的访问地址
//	for (i = 0; i < 10; i++){
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++){
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}


//int main(){
//	int arr[10] = { 0 };
//	int* pa = arr;
//	char* pc = arr;
//	//printf("%p\n", arr);
//	printf("%p\n", pa);
//	printf("%p\n", pa+1);//地址加了四个字节
//	//指针类型决定了指针+1/-1时的大小
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);//地址只加了一个字节
//	return 0;
//}


//int main(){
//	int a = 0x11223344;//如果p是整形指针，解引用访问了4个字节
//	int * p = &a;
//	*p = 0;
//	char* p = &a;//如果p是字符指针，解引用访问了1个字节
//	*p = 0;
//	//指针类型的第一个作用就是决定了指针的访问权限，也就是能访问几个字节
//	//int* --4
//	//char* --1
//	//short*--2
//	//double* --8
//	return 0;
//}


//int main(){
//	int a = 0;
//	int* p = &a;//指针变量
//	*p = 20;
//	p = 100;
//	return 0;
//}