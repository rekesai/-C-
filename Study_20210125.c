#include<stdio.h>
#include<string.h>
//void print(int arr[], int sz){//��ӡ����
//	int i = 0;
//	for (i = 0; i < sz; i++){
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
////������ͬ��С����������
//void exchange(int arr1[], int arr2[], int sz){
//	int i = 0;
//	int tmp = 0;
//	for (i = 0; i < sz; i++){
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//int main(){
//	int arr1[5] = { 1, 3, 5, 7, 9 };
//	int arr2[5] = { 2, 4, 6, 8, 10 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	print(arr1, sz);
//	print(arr2, sz);
//	exchange(arr1, arr2, sz);
//	print(arr1, sz);
//	print(arr2, sz);
//	return 0;
//}


//void init(int arr[]){//��ʼ������Ϊ0123456789
//	int i = 0;
//	for (i = 0; i < 10; i++){
//		arr[i] = i;
//	}
//}
//void print(int arr[]){//��ӡ����
//	int i = 0;
//	for (i = 0; i < 10; i++){
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void reverse(int arr[], int sz){//��������
//	int tmp = 0;
//	int left = 0;
//	int right = sz - 1;
//	while (left < right){
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main(){
//	int arr[10];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr);
//	print(arr);//����ǰ
//	reverse(arr, sz);
//	print(arr);//�����
//	return 0;
//}


//ð������
//void bubble_sort(int arr[], int sz){
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i = 0; i < sz - 1; i++){
//		int flag = 1;
//		for (j = 0; j < sz - 1- i; j++){
//			if (arr[j] > arr[j + 1]){
//				tmp = arr[j +1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//				flag = 0;
//			}	
//		}
//		if (flag == 1){
//			break;
//		}
//	}
//}
//int main(){
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < 10; i++){
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//�ݹ���쳲�������
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
//�ǵݹ���쳲�������
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


//Exponential functionָ����
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


//����һ������������ÿλ֮��
//int DigitSum(int  n){
//	static int sum = 0;//ֻ��ʼ��һ��
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


//int mystrlen(char *str){//�����ַ�������
//	if (*str != '\0'){
//		return 1 + mystrlen(str + 1);
//	}
//	else{
//		return 0;
//	}
//}
//void reverse_string(char *string){//�ݹ������ַ���
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
//	printf("����ǰ��%s\n", arr);
//	reverse_string(arr);
//	printf("�����%s\n", arr);
//}