#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

int main(){
	FILE* pf = fopen("0312.txt", "r");
	if (pf == NULL){
		printf("打开文件失败\n");
		printf("%s\n", strerror(errno));
		return 1;
	}
	printf("打开文件成功\n");
	return 0;
}
//struct St{
//	int n;
//	char c;
//	int arr[];//柔性数组成员（大小是柔性可变的）
//	//在计算包含柔性数组成员的结构体的大小的时候，不包括柔性数组成员
//};
//int main(){
//	printf("%d\n", sizeof(struct St));
//	return 0;
//}


//char* GetMemory(void){
//	char p[] = "hello world";
//	return p;
//}
//void Test(void){
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//int main(){
//	Test();
//	return 0;
//}


//void GetMemory(char** p){
//	*p = (char*)malloc(100);
//}
//void Test(void){
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world\n");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main(){
//	Test();
//	return 0;
//}

