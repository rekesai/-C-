#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<errno.h>
#include<ctype.h>
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ�����
//���д�����������ľ����в���ĳ�������Ƿ���ڡ�
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
		printf("�ҵ���\n");
	}
	else{
		printf("�Ҳ���\n");
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


//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
//���磺����s1 = AABCD��s2 = BCDAA������1
//		     ����s1 = abcd��s2 = ACBD������0
//AABCD����һ���ַ��õ�ABCDA
//AABCD���������ַ��õ�BCDAA
//AABCD����һ���ַ��õ�DAABC
//int findRound(const char * src, char * find)
//{
//	char tmp[256] = { 0 }; //��һ�������ռ佫ԭ�ַ�����������ԭ�ַ���
//	strcpy(tmp, src); //�ȿ���һ��
//	strcat(tmp, src); //������һ��
//	return strstr(tmp, find) != NULL; //�����Ҳ��ҵõ�
//}
//int rotate(char* arr1, char* arr2){
//	char tmp[100] = { 0 };
//	//��arr1����һ���tmp��׷����tmp��
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



//strerror-���󱨸溯�����⺯����������ʱ��
//int main(){
//	//printf("hehe\n");
//	FILE* pf = fopen("test.txt", "r");
//	printf("%s\n", strerror(errno));
//	return 0;
//}


//�Ƚ������ַ����������ַ���asc����е�ֵ���Ƚ�
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



//׷���ַ�
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