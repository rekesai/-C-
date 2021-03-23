#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>


//模拟atoi函数
//enum State{
//	VALID,
//	INVALID
//};
//enum State state = INVALID;//全局变量
//
//int my_atoi(const char* str){
//	int flag = 1;
//	if (str == NULL){//空指针
//		return 0;
//	}
//	if (*str == '\0'){//空字符串
//		return 0;
//	}
//	while (is_space(*str)){//空白字符-跳过
//		str++;
//	}
//	if (*str == '+'){//处理正负号
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
//		printf("合法的：%d\n", ret);
//	}
//	if (state == INVALID){
//		printf("不合法的：%d\n", ret);
//	}
//	return 0;
//}


//typedef struct{
//	int a;//4  开辟4个字节
//	char b;//1   开辟4个字节占用1个
//	short c;//2   占用2个
//	short d;//2    开辟4个字节
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
//	//联合体公用空间short数组虽大（14）但单位是2，所以向int（4）对齐，答案16
//};
//int main()
//{
//	printf("%d\n", sizeof(union Un));
//	return 0;
//}


//int main()
//{
//	unsigned char puc[4];//开辟4个字节
//	struct tagPIM
//	{
//		unsigned char ucPim1;//放入第1个字节
//		unsigned char ucData0 : 1;//放入第2个字节占最右1位
//		unsigned char ucData1 : 2;//从右至左占2位
//		unsigned char ucData2 : 3;//从右至左占3位
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


//位段
//struct A{//3个字节
//	unsigned char a : 4;//开辟1个字节占4位
//	unsigned char b : 2;//占2位
//	unsigned char c;//重新开辟1个字节
//	unsigned char d : 1;//重新开辟1个字节占1位
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