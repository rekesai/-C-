#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>


//ģ��atoi����
//enum State{
//	VALID,
//	INVALID
//};
//enum State state = INVALID;//ȫ�ֱ���
//
//int my_atoi(const char* str){
//	int flag = 1;
//	if (str == NULL){//��ָ��
//		return 0;
//	}
//	if (*str == '\0'){//���ַ���
//		return 0;
//	}
//	while (is_space(*str)){//�հ��ַ�-����
//		str++;
//	}
//	if (*str == '+'){//����������
//		flag = 1;
//		str++;
//	}
//	if (*str == '-'){
//		flag = -1;
//		str++;
//	}
//	int num = 0;
//	while (*str != '\0'){
//		if (isdigit(*str)){
//			num = num * 10 + flag * (*str - '0');
//			if (num > INT_MAX || num < INT_MIN){
//				return 0;
//			}
//
//		}
//		else{
//			return 0;
//		}
//		str++;
//	}
//	state = VALID;
//}
//int main(){
//	int ret = my_atoi("-123");
//	if (state == VALID){
//		printf("�Ϸ��ģ�%d\n", ret);
//	}
//	if (state == INVALID){
//		printf("���Ϸ��ģ�%d\n", ret);
//	}
//	return 0;
//}


//typedef struct{
//	int a;//4  ����4���ֽ�
//	char b;//1   ����4���ֽ�ռ��1��
//	short c;//2   ռ��2��
//	short d;//2    ����4���ֽ�
//}AA_t;
//int main(){
//	printf("%d\n", sizeof(AA_t));
//	return 0;
//}


//enum ENUM_A
//{
//	X1,//0
//	Y1,//1
//	Z1 = 255,
//	A1,//256
//	B1,//257
//};
//int main(){
//	enum ENUM_A enumA = Y1;
//	enum ENUM_A enumB = B1;
//	printf("%d %d\n", enumA, enumB);
//	return 0;
//}


//int main()
//{
//	union
//	{
//		short k;
//		char i[2];
//	}*s, a;
//	s = &a;
//	s->i[0] = 0x39;
//	s->i[1] = 0x38;
//	printf("%x\n", a.k);
//	return 0;
//}


//union Un
//{
//	short s[7];//14
//	int n;//4
//	//�����幫�ÿռ�short�������14������λ��2��������int��4�����룬��16
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}


//int main()
//{
//	unsigned char puc[4];//����4���ֽ�
//	struct tagPIM
//	{
//		unsigned char ucPim1;//�����1���ֽ�
//		unsigned char ucData0 : 1;//�����2���ֽ�ռ����1λ
//		unsigned char ucData1 : 2;//��������ռ2λ
//		unsigned char ucData2 : 3;//��������ռ3λ
//	}*pstPimData;
//	pstPimData = (struct tagPIM*)puc;
//	memset(puc, 0, 4);
//	pstPimData->ucPim1 = 2;
//	pstPimData->ucData0 = 3;
//	pstPimData->ucData1 = 4;
//	pstPimData->ucData2 = 5;
//	printf("%02x %02x %02x %02x\n", puc[0], puc[1], puc[2], puc[3]);
//	return 0;
//}


//λ��
//struct A{//3���ֽ�
//	unsigned char a : 4;//����1���ֽ�ռ4λ
//	unsigned char b : 2;//ռ2λ
//	unsigned char c;//���¿���1���ֽ�
//	unsigned char d : 1;//���¿���1���ֽ�ռ1λ
//};
//int main(){
//	printf("%d\n", sizeof(struct A));
//	return 0;
//}


//#pragma pack(4)
//struct T1{//12
//	short a;
//	char b;
//	long c;
//	long d;
//};
//struct T2{//12
//	long a;
//	short b;
//	char c;
//	long d;
//};
//struct T3{//16
//	short a;
//	long b;
//	char c;
//	long d;
//};
//int main(){
//	printf("T1 = %d\nT2 = %d\nT3 = %d\n", sizeof(struct T1), sizeof(struct T2), sizeof(struct T3));
//	return 0;
//}


//#pragma pack(4)
//struct A{//16
//	int a;
//	short b;
//	int c;
//	char d;
//};
//struct B{//12
//	int a;
//	short b;
//	char c;
//	int d;
//};
//int main(){
//	printf("A = %d\nB = %d\n", sizeof(struct A), sizeof(struct B));
//	return 0;
//}