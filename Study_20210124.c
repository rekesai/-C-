#include<stdio.h>

//char reverse_string(char *string){
//	if (*str != '\0'){
//		printf("")
//	}
//}
//int main(){
//	char arr[] = "abcdef";
//	reverse_string(arr);
//}


//�ݹ�ʵ��strlen
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
//�ǵݹ�ʵ��strlen
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


//�ǵݹ���n�Ľ׳�
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
//�ݹ���n�Ľ׳�
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



//�ݹ�Ĵ�ӡ��������ÿһλ
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
//	printf("%p\n", arr);//�����׵�ַ
//	printf("%p\n", &arr);//�����׵�ַ
//	printf("%p\n", &arr[0]);//������Ԫ�ص�ַ
//	printf("%p\n", arr + 1);
//	printf("%p\n", &arr + 1);
//	printf("%p\n", &arr[0] + 1);//��������ַ��1�������1�����������16���ֽھͼ���16
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


//��������������Ԫ�صĵ�ַ��������������
//1.sizeof(������) - ��������־���������飬���������������
//2.&����������������ʾ�������飬ȡ��������������ĵ�ַ


//ð�ݷ�����
//����-void bubble_sort(int *arr)
//void bubble_sort(int arr[], int sz){
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++){
//		int flag = 1;//�����Ѿ�����
//		for (j = 0; j < sz - 1 - i ; j++){//j������i�ı仯���仯��ð�ݷ�10��Ԫ����Ҫ�Ƚ�9��
//			if (arr[j] > arr[j + 1]){
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//���ֻ���������
//			}
//		}
//		if (flag == 1){//�ж��Ƿ�����������û�з�����������
//			break;
//		}
//	}
//}
//
//int main(){
//	int arr[10] = { 9, 8, 7, 6, 5, 4, 3, 2, 1, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	//���鴫�ε�ʱ������������Ԫ�صĵ�ַ
//	bubble_sort(arr, sz);
//	for (i = 0; i < 10; i++){
//		printf("%d", arr[i]);
//	}
//	return 0;
//}


//int main(){
//	//int arr[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };Ĭ�ϴ�arr[0][0]��ʼ����Ԫ�����к���
//	int arr[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7 }, 8, 9, 10 };//����ָ������Ԫ��
//	//int arr[ ][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//���±����ʡ�ԣ����±겻��ʡ��
//	//int arr[3][ ] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//���±����ʡ�ԣ����±겻��ʡ��
//	int i = 0;
//	int j = 0;


//֤��ָ��洢��������
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
	//		//��ά�������ڴ��д洢�ĵ�ַҲ��������
	//		printf("arr[%d][%d]=%d &arr[%d][%d]=%p\n", i, j, arr[i][j], i, j, &arr[i][j]);
	//	}
	//}
//	return 0;
//}