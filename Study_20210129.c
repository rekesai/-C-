#include<stdio.h>
#include<assert.h>
#include<string.h>
//输入一个整数数组，实现一个函数，来调整该数组中数字的顺序
//使得数组中所有的奇数位于数组的前半部分，所有偶数位于数组的后半部分
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
//		printf("大于\n");
//	}
//	else{
//		printf("小于\n");
//	}
//	return 0;
//}


//模拟实现strlen函数
int mystrlen(const char* str){//只是求长度，不修改字符串
	assert(str != NULL);//断言
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




