//��ŵ������
//������̨��
#include<stdio.h>
#include<string.h>
#include<math.h>
//#include"func.h"

//ʵ��һ����������ӡ�˷��ھ������ھ����������������Լ�ָ��
//�磺����9�����9 * 9�ھ��������12�����12 * 12�ĳ˷��ھ�����
void Mft(int n){   //Mft--Multiplication formula table
	int i = 0;
	int j = 0;
	for (i = 1; i <= n; i++){
		for (j = 1; j <= i; j++){
			printf("%d*%d=%3d ", i, j, i*j);//Ԥ�������ո��ñ�����������
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


//ʵ��һ��������������������������
//void exchange(int *px, int *py){
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main(){
//	int x = 0;
//	int y = 0;
//	scanf("%d %d", &x, &y);
//	printf("����ǰ��%d %d\n", x, y);
//	exchange(&x, &y);
//	printf("������%d %d\n", x, y);
//	return 0;
//}



//�ж����꺯��
//void leapyear(int year){
//	if (year % 4 == 0 && year % 100 != 0){//����4�Ҳ�����100
//		printf("%d������\n", year);
//	}
//	else if (year % 400 == 0){//����400
//		printf("%d������\n", year);
//	}
//	else{
//		printf("%d��������\n", year);
//	}
//}
//int main(){
//	int year = 0;
//	while (scanf("%d", &year) != EOF){//����ѭ�������ѯ
//		leapyear(year);
//	}
//	return 0;
//}


//�ж�100��200֮��������Ƿ�Ϊ����
//int prime(int i){
//	int n = 0;
//	for (n = 2; n <= sqrt(i); n++){  //sqrt-���������i�Ǻ�����ô����������֮��һ����������������
//		if (i % n == 0){
//			return 0;
//		}
//	}//����������������n�ж���֮��û��return 0��ִ��return 1
//	return 1;
//}
//int main(){
//	int i = 0;
//	for (i = 101; i <= 200; i+=2){  //ż��������������
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
//		Sleep(1000);//��λΪ����
//		system("cls");//cls clear screen�����Ļ
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	return 0;
//}


//����Ա�����ֳ���֡���7λ���٣��Ӽ�������������ɼ���ÿ��7���������ٷ��ƣ���ȥ��һ����߷ֺ�һ����ͷ֣����ÿ���ƽ���ɼ�
//int main(){
//	int arr[7] = { 0 };
//	int i = 0;
//
//	float score = 0;
//	for (i = 0; i < 7; i++){
//		scanf("%d", &arr[i]);//�����߸����ֵ�����
//		score += arr[i];//����ɼ�����
//	}
//	int max = arr[0];
//	int min = arr[0];
//	for (i = 1; i < 7; i++){//���7�������е����ֵ����Сֵ
//		if (max < arr[i]){
//			max = arr[i];
//		}
//		if (min > arr[i]){
//			min = arr[i];
//		}
//	}
//	score = (score - (max + min)) / 5;//��ȥ��߷ֺ���ͷ�֮���ƽ����
//	printf("%.2f\n", score);//���ƽ���ֱ���С�������λ
//	return 0;
//}


//��������·����������µ�����
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


//VS2013��������[ ]�б����ǳ����������Ǳ���
//int main(){
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++){
//		printf("&arr[%d] = %p\n", i, &arr[i]);//�������ڴ�����������ŵ�
//	}
//	return 0;
//}


//�ݹ���쳲�������1 1 2 3 5 8 13 21 34 55��Ч�ʵ��£��㷨���Ӷ�̫��
//int Fib(int n){
//	if (n <= 2){
//		return 1;
//	}
//	else{
//		return Fib(n - 1) + Fib(n - 2);
//	}
//}
//int Fib(int n){//ѭ����쳲�������
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
//	if (n > 1){//��ֹ����
//		return n * Fac(n - 1);//ÿ���n-1ʹ��nԽ��Խ�ӽ���ֹ�������ҷ��Ͻ׳�˼��
//	}
//	else{//�����ִ�е���䣬��n����Ϊ1ʱ������1����Ϊ�׳�1*2*3*...*n
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


//��ͳѭ���뷨
//int my_strlen(char* str){
//	int count = 0;
//	while(*str != '\0'){
//		count++;
//		str++;
//	}
//}
//�ݹ�
//int my_strlen(char* str){
//	if (*str != '\0'){//�ݹ���ֹ�������ж��Ƿ������ַ���β����\0
//		return 1 + my_strlen(str + 1);
//	}//�����룬ֱ������ '\0'ִ��else���ٷ���0+1+1+1+1+1+1����󷵻�6
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
//	char arr[] = "abcdef";//����������Ԫ�صĵ�ַ-char*
//	int len = my_strlen(arr);//���뺯������ʼ�ݹ�
//	printf("��������%d��Ԫ��\n", len);
//	return 0;
//}


//�ݹ�ش�ӡ�������ֵ�ÿһλ
//void print(int n){
//	if (n > 9){//��Ϊ�ݹ���ֹ��������������㲻������ſ���ִ�н������Ĵ���
//		print(n / 10);//�ݹ�Ľ���һ����һ�㣬Խ��Խ�ӽ���ֹ������
//	}
//	//������� n !> 9ʱ��ִ����仰Ȼ�󷵻���һ���print����֮��
//	printf("%d ", n % 10);
//}
//int main(){
//	int  num = 0;
//	scanf("%d", &num);//1234
//	//��ӡnum��ÿһλ    1   2   3   4  
//	print(num);//printf�������԰�num��ÿһλ��ӡ����Ļ��
//	//print(1234)
//	//print(123)  4
//	//print(12)  3  4
//	//print(1)  2  3  4
//	//1  2  3  4
//	return 0;
//}


//����ĵݹ飬����ֹ�ĵ����Լ���ջ���
//int main(){
//	printf("��ȰͲ�\n");
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
//	printf("%d\n", mul(a));//mul-mulifly�˷�
//	return 0;
//}