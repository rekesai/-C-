#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
//void test(int *p){
//}
//void test2(int *p[4]){
//}
//int main(){
//	int arr[10];
//	int * p = arr;//��Ԫ�صĵ�ַ
//	int(*pa)[10] = &arr;//����ĵ�ַ
//	test(arr);
//	//��ά��ַ
//	int date[3][4];
//	int(*pd)[4] = date;//��Ԫ�صĵ�ַ
//	int(*p2)[3][4] = &date;
//	return 0;
//}

//����ָ�롪��ָ�����ε�ָ��
//����ָ�롪��ָ�������ָ�롪���������ĵ�ַ
//����ָ�롪��ָ������ָ�롪����ź����ĵ�ַ

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
//	//printf("%p\n", Add);//����һ�����Ǻ����ĵ�ַ
//	//int(*pf)(int, int) = Add;
//	int(*pf)(int, int) = &Add;//pf���Ǻ���ָ��
//
//	int ret = (*pf)(2, 3);//*��ֻ�ǰ��裬���ٸ�������ν��Ҳ����û�У�д��pf(2, 3)
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
//   ( void(* )() )0 ����ǿ������ת����0����int���ͣ���0ǿ������ת���ɺ���ָ������
//����0��ַ���ĺ������ú����޲���������������void
//void test(){
//}
//int main(){
//	void (*pf)() = test;
//	return 0;
//}

//����һ�����������������ĺ�����signal
//signal������������������һ������������int���ڶ�����һ������ָ��
//�ú���ָ��ָ��ĺ���������int������������void
//signal�����ķ���������һ������ָ�룬�ú���ָ��ָ��ĺ���������int������������void
//void (*signal (int, void(*) (int) ) ) (int);
//
//typedef void(*pfun_t)(int);//������ָ������  void(*)(int)  ��һ����������pfun_t
//
//pfun_t signal(int, pfun_t);//��   void (*signal (int, void(*) (int) ) ) (int);


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
//	//����ָ�������
//	int(*pf1)(int, int) = Add;
//	int(*pf2)(int, int) = Sub;
//	int(*pf)(int, int);//����ָ��
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
//		printf("��ѡ��");
//		scanf("%d", &input);
//		if (input == 0){
//			printf("�˳�����\n");
//			break;
//		}
//		else if(input >= 1 && input <=4){
//			printf("������2����������");
//			scanf("%d%d", &x, &y);
//			ret = pfArr[input](x, y);
//			printf("ret = %d\n", ret);
//		}
//		else{
//			printf("ѡ�����\n");
//		}	
//	} while (input);
//	return 0;
//}



//void calc(int(*p)(int, int)){
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	printf("������2����������");
//	scanf("%d%d", &x, &y);
//	ret = p(x, y);
//	printf("%d\n", ret);
//}
//int main(){
//	int input = 0;
//	do{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			calc(Add);//������
//			break;
//		case 2:
//			calc(Sub);//������
//			break;
//		case 3:
//			calc(Mul);//������
//			break;
//		case 4:
//			calc(Div);//������
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}


//ʹ��switch�������࣬��Ҫ���ӹ��ܽ�Ϊ�鷳
//int main(){
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int ret = 0;
//	do{
//		menu();
//		printf("��ѡ��");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			printf("������2����������");
//			scanf("%d%d", &x, &y);
//			ret = Add(x, y);
//			printf("%d\n", ret);
//			break;
//		case 2:
//			printf("������2����������");
//			scanf("%d%d", &x, &y);
//			ret = Sub(x, y);
//			printf("%d\n", ret);
//			break;
//		case 3:
//			printf("������2����������");
//			scanf("%d%d", &x, &y);
//			ret = Mul(x, y);
//			printf("%d\n", ret);
//			break;
//		case 4:
//			printf("������2����������");
//			scanf("%d%d", &x, &y);
//			ret = Div(x, y);
//			printf("%d\n", ret);
//			break;
//		case 0:
//			printf("�˳�������\n");
//			break;
//		default:
//			printf("�����������������\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}



//����ָ������
//��ź���ָ�������
//&�������� ����
//ָ����ָ�������ָ����


//int main(){
//	//ָ��ӷ�����ĺ���ָ��
//	int(*p)(int, int);//����ָ��
//	//����ָ�������
//	int(*pArr[4])(int, int);
//
//	int(*(*ppArr)[4])(int, int) = &pArr;//ָ����ָ�������ָ��
//
//	return 0;
//}



//�ص�����
//void test1(){
//	printf("�Ǻ�\n");
//
//}void test2(void (*p)()){
//	p();
//}
//int main(){
//	test2(test1);
//	return 0;
//}


//ð������
void print_arr(int arr[], int sz){
	int i = 0;
	for (i = 0; i < sz; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//void bubble_sort(int arr[], int sz){
//	int i = 0;  //����
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



//�⺯������qsort   -quick sort ��������
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
	//ʹ��qsort��������ṹ��
	struct Stu arr[] = { { "����", 20 }, { "wangwu", 15 }, { "lisi", 31 } };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//��������������
	qsort(arr, sz, sizeof(arr[0]), cmp_stu_by_age);
}
int main(){
	//test1();
	test2();
	return 0;
}