#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

int main(){
	FILE* pf = fopen("0312.txt", "r");
	if (pf == NULL){
		printf("���ļ�ʧ��\n");
		printf("%s\n", strerror(errno));
		return 1;
	}
	printf("���ļ��ɹ�\n");
	return 0;
}
//struct St{
//	int n;
//	char c;
//	int arr[];//���������Ա����С�����Կɱ�ģ�
//	//�ڼ���������������Ա�Ľṹ��Ĵ�С��ʱ�򣬲��������������Ա
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
