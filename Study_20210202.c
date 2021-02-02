#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
//void test(int *p){
//}
//void test2(int *p[4]){
//}
//int main(){
//	int arr[10];
//	int * p = arr;//首元素的地址
//	int(*pa)[10] = &arr;//数组的地址
//	test(arr);
//	//二维地址
//	int date[3][4];
//	int(*pd)[4] = date;//首元素的地址
//	int(*p2)[3][4] = &date;
//	return 0;
//}

//整形指针——指向整形的指针
//数组指针——指向数组的指针——存放数组的地址
//函数指针——指向函数的指针——存放函数的地址

//int Add(int x, int y){
//	return x + y;
//}
//int main(){
//	//int a = 10;
//	//int* pa = &a;
//	//char arr[5] = { 0 };
//	//char (*parr)[5] = &arr;
//
//	//printf("%p\n", &Add);
//	//printf("%p\n", Add);//二者一样都是函数的地址
//	//int(*pf)(int, int) = Add;
//	int(*pf)(int, int) = &Add;//pf就是函数指针
//
//	int ret = (*pf)(2, 3);//*号只是摆设，多少个都无所谓，也可以没有，写作pf(2, 3)
//	//Add(2, 3);
//	//pf(2, 3);
//
//	printf("%d\n", ret);
//	return 0;
//}


//int my_strlen(const char* str){
//	assert(str != NULL);
//	int count = 0;
//	while (*str){
//		str++;
//		count++;
//	}
//	return count;
//}
//int main(){
//	char arr[] = "abcdefg";
//	//int len = my_strlen(arr);
//	//printf("%d\n", len);
//	int(*pf)(const char*) = my_strlen;
//	int len = (*pf)("bit");
//	printf("%d\n", len);
//	len = pf("hello bit");
//	printf("%d\n", len);
//	return 0;
//}

//( * ( void ( * ) ( ) ) 0 ) ();
//   ( void(* )() )0 ——强制类型转换，0本是int类型，将0强制类型转换成函数指针类型
//调用0地址处的函数，该函数无参数，返回类型是void
//void test(){
//}
//int main(){
//	void (*pf)() = test;
//	return 0;
//}

//这是一个函数声明，声明的函数叫signal
//signal函数有两个参数，第一个参数类型是int，第二个是一个函数指针
//该函数指针指向的函数参数是int，返回类型是void
//signal函数的返回类型是一个函数指针，该函数指针指向的函数参数是int，返回类型是void
//void (*signal (int, void(*) (int) ) ) (int);
//
//typedef void(*pfun_t)(int);//给函数指针类型  void(*)(int)  起一个别名，叫pfun_t
//
//pfun_t signal(int, pfun_t);//简化   void (*signal (int, void(*) (int) ) ) (int);


//int Add(int x, int y){
//	return x + y;
//}
//int Sub(int x, int y){
//	return x - y;
//}
//int main(){
//	int a = 10;
//	int b = 20;
//	//&a; &b;
//	int* arr[] = { &a, &b };
//	//函数指针的数组
//	int(*pf1)(int, int) = Add;
//	int(*pf2)(int, int) = Sub;
//	int(*pf)(int, int);//函数指针
//
//
//	int(*pfArr[2])(int, int) = { Add, Sub };
//
//	return 0;
//}


//void menu(){
//	printf("*************************\n");
//	printf("******** 1. Add *********\n");
//	printf("******** 2. Sub *********\n");
//	printf("******** 3. Mul *********\n");
//	printf("******** 4. Div  ********\n");
//	printf("******** 0. exit ********\n");
//	printf("*************************\n");
//}
//int Add(int x, int y){
//	return x + y;
//}
//int Sub(int x, int y){
//	return x - y;
//}
//int Mul(int x, int y){
//	return x * y;
//}
//int Div(int x, int y){
//	return x / y;
//}
//int main(){
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	int(*pfArr[])(int, int) = { 0, Add, Sub, Mul, Div };
//
//	do{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		if (input == 0){
//			printf("退出程序\n");
//			break;
//		}
//		else if(input >= 1 && input <=4){
//			printf("请输入2个操作数：");
//			scanf("%d%d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else{
//			printf("选择错误\n");
//		}	
//	} while (input);
//	return 0;
//}



//void calc(int(*p)(int, int)){
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("请输入2个操作数：");
//	scanf("%d%d", &x, &y);
//	ret = p(x, y);
//	printf("%d\n", ret);
//}
//int main(){
//	int input = 0;
//	do{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			calc(Add);//计算器
//			break;
//		case 2:
//			calc(Sub);//计算器
//			break;
//		case 3:
//			calc(Mul);//计算器
//			break;
//		case 4:
//			calc(Div);//计算器
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//使用switch过于冗余，若要添加功能较为麻烦
//int main(){
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do{
//		menu();
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			printf("请输入2个操作数：");
//			scanf("%d%d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("请输入2个操作数：");
//			scanf("%d%d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("请输入2个操作数：");
//			scanf("%d%d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("请输入2个操作数：");
//			scanf("%d%d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("退出计算器\n");
//			break;
//		default:
//			printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//函数指针数组
//存放函数指针的数组
//&数组名？ 可以
//指向函数指针数组的指针中


//int main(){
//	//指向加法运算的函数指针
//	int(*p)(int, int);//函数指针
//	//函数指针的数组
//	int(*pArr[4])(int, int);
//
//	int(*(*ppArr)[4])(int, int) = &pArr;//指向函数指针数组的指针
//
//	return 0;
//}



//回调函数
//void test1(){
//	printf("呵呵\n");
//
//}void test2(void (*p)()){
//	p();
//}
//int main(){
//	test2(test1);
//	return 0;
//}


//冒泡排序
void print_arr(int arr[], int sz){
	int i = 0;
	for (i = 0; i < sz; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//void bubble_sort(int arr[], int sz){
//	int i = 0;  //趟数
//	for (i = 0; i < sz - 1; i++){
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++){
//			if (arr[j] > arr[j + 1]){
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main(){
//	int arr[] = { 1, 5, 2, 4, 3, 9, 8, 6, 7, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	print_arr(arr, sz);
//	return 0;
//}



//库函数——qsort   -quick sort 快速排序
/*void qsort(void *base,    
					size_t num,  
					size_t width, 
					int(*compare)(const void *elem1, const void *elem2)
					);
*/
//int cmp_int(const void* e1, const void* e2){
//	return 
//}
//void test1(){
//	int arr[] = { 1, 5, 2, 4, 3, 9, 8, 6, 7, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print_arr(arr, sz);
//}


struct Stu{
	char name[20];
	int age;
};
int cmp_stu_by_age(const void* e1, const void* e2){
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
void test2(){
	//使用qsort函数排序结构体
	struct Stu arr[] = { { "张三", 20 }, { "wangwu", 15 }, { "lisi", 31 } };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//按照年龄来排序
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
}
int main(){
	//test1();
	test2();
	return 0;
}