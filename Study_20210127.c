#include<stdio.h>
#include<string.h>
#include<math.h>
//���0��100000֮�������ˮ�ɻ����������
//ˮ�ɻ�����ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//��:153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ��ˮ�ɻ���
int main(){
	int num = 0;
	for (num = 0; num < 100000; num++){
		int count = 1;
		int sum = 0;
		int tmp = num;
		while (tmp / 10){//�жϼ�λ��
			count++;
			tmp = tmp / 10;
		}
		tmp = num;
		while (tmp){//�����λ�η���
			sum += pow(tmp % 10, count);
			tmp = tmp / 10;
		}
		if (sum == num){//�ж��Ƿ�ˮ����
			printf("%d ", num);
		}
	}
	return 0;
}




//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
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


//дһ����������������һ���ַ���������
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


//дһ����������������һ���ַ���������
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
//	//������������溯���������Լ���ƣ�Ҫ��ʹ��ָ��
//	Reverse(str);
//	return 0;
//}
// ��Ҫ����ѭ�����룬��Ϊÿ���㷨�����ж����������������֤
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



//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣arr��һ������һά���顣
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
//	int arr[] = { 1, 2, 3, 4, 5 };//int������4���ֽ�
//	short *p = (short*)arr;//short��2���ֽ�
//	int i = 0;
//	for (i = 0; i<4; i++)//����ѭ��4�����ԸĶ�����arrǰ����Ԫ�صķֱ�ǰ�󲿷�
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);//��ӡ00345
//	}
//	return 0;
//}
//
//
////ÿһ�κ������ã���Ҫ��ջ����Ϊ��������ռ�
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
//	print1(s);//print��������ӡ�ṹ������
//	print2(&s);
//	return 0;
//}



//int main(){
//	char* p = "abcdef";
//	printf("%s\n", p);
//	//�ַ�ָ�������
//	char* arr[] = { "abcdef", "hello", "bit" };//arr[1],arr[2],arr[3]
//	int i = 0;
//	for (i = 0; i < 3; i++){
//		printf("%s\n", arr[i]);
//	}
//	return 0;
//}


//int main(){
//	int a = 10;
//	int* p = &a;//һ��ָ��
//	int * * pp = &p;
//	return 0;
//}


//int main(){
//	int arr[5] = { 1, 2, 3, 4, 5 };
//	int* p = arr;//��Ԫ�ص�ַ
//	int i = 0;
//	for (i = 0; i < 5; i++){
//		printf("%d ", *(p+i));//ÿ�θ���Ԫ�ص�+i
//	}
//	return 0;
//}


//���ַ�������
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
//	// ָ��-ָ��   �õ�����ָ���ָ��֮���Ԫ�ظ���
//	//ǰ��������ָ��ָ�����ͬһ�������ռ�
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
//	//����ͨ��ָ�����ķ��ʵ�ַ
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
//	printf("%p\n", pa+1);//��ַ�����ĸ��ֽ�
//	//ָ�����;�����ָ��+1/-1ʱ�Ĵ�С
//	printf("%p\n", pc);
//	printf("%p\n", pc + 1);//��ַֻ����һ���ֽ�
//	return 0;
//}


//int main(){
//	int a = 0x11223344;//���p������ָ�룬�����÷�����4���ֽ�
//	int * p = &a;
//	*p = 0;
//	char* p = &a;//���p���ַ�ָ�룬�����÷�����1���ֽ�
//	*p = 0;
//	//ָ�����͵ĵ�һ�����þ��Ǿ�����ָ��ķ���Ȩ�ޣ�Ҳ�����ܷ��ʼ����ֽ�
//	//int* --4
//	//char* --1
//	//short*--2
//	//double* --8
//	return 0;
//}


//int main(){
//	int a = 0;
//	int* p = &a;//ָ�����
//	*p = 20;
//	p = 100;
//	return 0;
//}