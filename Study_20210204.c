#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<errno.h>
#include<ctype.h>
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的
//请编写程序在这样的矩阵中查找某个数字是否存在。
#define ROW 3
#define COL 3
int findnum(int arr[ROW][COL], int n, int row, int col){
	int i = 0;
	int j = col - 1;
	while (i < col && j >= 0){
		if (arr[i][j] < n){
			i++;
		}
		else if (arr[i][j] > n){
			j--;
		}
		else{
			return 1;
		}
	}
	return 0;
}
int main(){
	int arr[ROW][COL] = { { 0, 1, 2 }, { 1, 2, 3 }, { 2, 3, 4 } };
	int n = 0;
	scanf("%d", &n);
	int ret = findnum(arr, n, ROW, COL);
	if (ret == 1){
		printf("找到了\n");
	}
	else{
		printf("找不到\n");
	}
	return 0;
}



//void left_rotate(const char*arr){
//	int k = 0;
//	scanf("%d", &k);
//	char tmp[100] = { 0 };
//	strcpy(tmp, arr + k);
//	strncat(tmp, arr, k);
//	printf("%s\n", tmp);
//}
//int main(){
//	char arr[10] = "ABCD";
//	left_rotate(arr);
//	return 0;
//}


//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//		     给定s1 = abcd和s2 = ACBD，返回0
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC
//int findRound(const char * src, char * find)
//{
//	char tmp[256] = { 0 }; //用一个辅助空间将原字符串做成两倍原字符串
//	strcpy(tmp, src); //先拷贝一遍
//	strcat(tmp, src); //再连接一遍
//	return strstr(tmp, find) != NULL; //看看找不找得到
//}
//int rotate(char* arr1, char* arr2){
//	char tmp[100] = { 0 };
//	//将arr1复制一遍给tmp并追加在tmp后
//	strcpy(tmp, arr1);
//	strcat(tmp, arr1);
//	if (strstr(tmp, arr2) != NULL){
//		return 1;
//	}
//	else{
//		return 0;
//	}
//}
//int main(){
//	char arr1[10] = "abcde";
//	char arr2[10] = "deabc";
//	char arr3[10] = "ABCDE";
//	printf("%d\n", rotate(arr1, arr2));
//	printf("%d\n", rotate(arr1, arr3));
//	return 0;
//}



//strerror-错误报告函数（库函数发生错误时）
//int main(){
//	//printf("hehe\n");
//	FILE* pf = fopen("test.txt", "r");
//	printf("%s\n", strerror(errno));
//	return 0;
//}


//比较两个字符串，根据字符在asc码表中的值来比较
//int main(){
//	printf("%d\n", strncmp("abcdef", "abcd", 5));
//	return 0;
//}


//int main(){
//	char arr1[20] = { 0 };
//	char arr2[] = "abcdefg";
//
//	strncpy(arr1, arr2, 4);
//	printf("%s\n", arr1);
//	return 0;
//}



//追加字符
//char* my_strcat(char* dest, const char* src){
//	assert(dest&& src);
//	char* ret = dest;
//	while(*dest){
//		dest++;
//	}
//	while (*dest++ = *src++){
//		;
//	}
//	return ret;
//}
//int main(){
//	char arr1[20] = "hello ";
//	char arr2[] = "world";
//	printf("%s\n", my_strcat(arr1, arr2));
//	return 0;
//}