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
////��������Ϸ
////ʱ�������ǰʱ��ͼ��������ʼʱ��֮��Ĳ�ֵ����λ����
////���������ʼʱ�䣺1970��1��1�� 08��00��00
//void game(){
//	//�����������1-100���������ϵ�ʱ���Ƿ����仯�ģ�time�����������ص���ʱ���
//
//	int ret = rand() % 100 + 1;
//	int guess = 0;
//	while (1){
//		printf("�������\n");
//		scanf("%d", &guess);
//		if (guess > ret){
//			printf("�´���\n");
//		}
//		else if (guess < ret){
//			printf("��С��\n");
//		}
//		else{
//			printf("�¶���\n");
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
//		printf("��ѡ��(1/0)��");
//		scanf("%d", &input);
//		switch (input){
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	srand(time(NULL));
//	return 0;
//}

//�������
//int  main(){
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 1; i <= 3; i++){
//		printf("���������룺");
//		scanf("%s", &password);
//		if (strcmp(password, "123456") == 0){
//			printf("������ȷ\n");
//			break;
//		}
//		else if (i == 3){
//			printf("����������λ������þ�\n");
//		}
//		else{
//			printf("������󣬻���%d���������\n", 3 - i);
//		}
//	}
//	return 0;
//}



//ת����Сд
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


//��������������������
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


//int main(){//�����ַ���
//	char arr1[] = "bit";
//	char arr2[20] = { 0 };
//
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}

//int main(){//�滻�ַ���
//	char arr[] = "hello bit";
//	memset(arr, 'x', 5);//��arr��ǰ���Ԫ���滻�ɡ�x��
//	printf("%s\n", arr);
//	return 0;
//}


//�������ε�ʱ��ʵ�δ��ݸ��βΣ�
//�β���ʵ�ε�һ����ʱ���������βε��޸Ĳ���Ӱ��ʵ��

//int main(){
//	int a = 10;
//	int b = 20;
//	int *pa = &a;
//	int *pb = &b;
//	test1(pa, pb);//��ֵ
//	test2(&pa, &pb);//��ַ
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
//	int left = 0;//����������������±�
//	int right = sz - 1;
//	while (left <= right){//������ͬʱָ��һ���±��ʱ������
//		int mid = left + (right - left) / 2;//ÿ��ѭ�����¶����м�ֵ
//		if (arr[mid] > k){
//			right = mid - 1;//��С��Χ
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
//	//arr�����飬��arr��Ϊ���������ε�ʱ�򴫵��������׵�ַ
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k, sz);//�ҵ��˷����±꣬�Ҳ�������-1
//	if (ret == -1){
//		printf("�Ҳ���\n");
//	}
//	else{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}