#include<stdio.h>
#include<string.h>
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
//int main(){
//	int money = 20;
//	int bottle = 0;
//	int soda = 0;
//	soda = money;
//	bottle = soda;
//	while (bottle > 1){
//		soda += bottle / 2;
//		bottle = bottle / 2 + bottle % 2;
//	}
//	printf("%d\n", soda);
//	return 0;
//}


//������������������ˮ����ƿ�ӻ��Ĺ���Ļ������Է��֣���ʵ���Ǹ��Ȳ����У�money * 2 - 1
//int main(){
//	int money = 0;
//	int soda = 0;
//	int bottle = 0;
//	scanf("%d", &money);
//	if (money <= 0){
//		soda = 0;
//	}
//	else{
//		soda = money * 2 - 1;
//	}
//	printf("soda = %d\n", soda);
//	return 0;
//}



//��ӡ����
//int main(){
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 7; i++){
//		for (j = 0; j < 7 - i - 1; j++){
//			printf(" ");
//		}
//		for (j = 0; j <2 * i + 1; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 0; i < 6; i++){
//		for (j = 0; j < i + 1; j++){
//			printf(" ");
//		}
//		for (j = 0; j < 2 * (6 - i) - 1; j++){
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main(){
//	char arr[] = "*************";
//	char left = arr;
//	char right = strlen(arr) - 1;
//	int i = 0;
//	for ()
//	return 0;
//}


//#include<assert.h>
////assert-����--�����еı���ʽΪ�棬ʲô���������������еı���ʽΪ�پͻᱨ��
//void mystrcpy(char* dest, char* src){
//	while (*dest++ = *src++){
//		;
//	}
//}
//int main(){
//	char arr1[10] = "������";
//	char arr2[10] = "��ȰͲ�";
//	printf("%s\n", arr1);
//	mystrcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}
////ģ��strcpy
//void mystrcpy(char* dest, char* src){
//	while (*dest++ = *src++){
//		;
//	}
//}
//int main(){
//	char arr1[20] = "qqqqqqqqqqqq";
//	char arr2[] = "abcdef";
//	mystrcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}