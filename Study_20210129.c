#include<stdio.h>
#include<assert.h>
#include<string.h>
//����һ���������飬ʵ��һ�������������������������ֵ�˳��
//ʹ�����������е�����λ�������ǰ�벿�֣�����ż��λ������ĺ�벿��
//void exchange(int arr[], int sz){
//	int left = 0;
//	int right = sz - 1;
//	while (left < right){
//		while ((left < right) && (arr[left] % 2 == 1)){
//			left++;
//		}
//		while ((left < right) && (arr[right] % 2 == 0)){
//			right--;
//		}
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//	}
//}
//int main(){
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++){
//		scanf("%d", &arr[i]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < 10; i++){
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	exchange(arr, sz);
//	for (i = 0; i < 10; i++){
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}


//int main(){
//	if (strlen("abc") - strlen("abcdef") > 0){
//		printf("����\n");
//	}
//	else{
//		printf("С��\n");
//	}
//	return 0;
//}


//ģ��ʵ��strlen����
int mystrlen(const char* str){//ֻ���󳤶ȣ����޸��ַ���
	assert(str != NULL);//����
	const char* start = str;
	while (*str){
		str++;
	}
	return str - start;
}
int main(){
	char arr[] = "abcdef";
	int len = mystrlen(arr);
	printf("len = %d\n", len);
	return 0;
}



