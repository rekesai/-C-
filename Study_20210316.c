#include<stdio.h>
#define MAX 100   //�����ʶ��
#define SQUARE(X) X*X

//struct S{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main(){
//	struct S s = { 0 };
//	s.a = 10;
//	s.b = 12;
//	s.c = 3;
//	s.d = 4;
//	printf("%d\n", sizeof(s));
//	return 0;
//}


//struct S{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//int main(){
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}


//int main(){
//	printf("%d\n", SQUARE(3 + 2));
//	return 0;
//}


//__FILE__   
//__LINE__
//__DATE__
//__TIME__
//int main(){
//	int i = 0;
//	for (i = 0; i < 10; i++){
//		printf("FILE = %s line = %d date = %s time = %s i = %d\n", __FILE__, __LINE__, __DATE__, __TIME__, i);
//	}
//	return 0;
//}


//#pragma pack(4)  //��Ĭ�϶���������Ϊ4
//struct S{
//	short sh; //2
//	double d; //8
//	int i;	  //4
//};
//int main(){
//	struct S s;
//	printf("%d\n", sizeof(s));
//	return 0;
//}


//struct S1{
//	char a;  //1
//	short b;   //2
//	int i;	  //4
//};
//struct S2{
//	char c;     //1
//	struct S1 s1;    //8
//	short sh;    //2
//};
////struct S3{
////	int i;   //4
////	double d;  //8
////  short sh;  //2
////	char ch;  //1
////};
//int main(){
//	struct S2 s2; 
//	printf("%d\n", sizeof(s2));  //��ӡ�ṹ�����s�Ĵ�С
//	return 0;
//}



//union Un{
//	char arr[7];
//	int i;
//};
//int main(){
//	union Un u;
//	printf("%d\n", sizeof(u));
//	return 0;
//}

//�������������жϵ�ǰϵͳ�Ǵ�˻���С��
//int CheckSystem(){
//	union Un{
//		char c;
//		int i;
//	};
//	union Un u;
//	u.c = 1;
//	return u.c;
//}
//int main(){
//	int ret = CheckSystem();
//	if (ret == 1){
//		printf("С��\n");
//	}
//	else{
//		printf("���\n");
//	}
//	return 0;
//}
//int main(){
//	union Un u;
//	//printf("%p\n", &u);
//	//printf("%p\n", &(u.c));
//	//printf("%p\n", &(u.i));
//	u.i = 0x11223344;
//	u.c = 0x55;
//	printf("%x\n", u.i);
//	return 0;
//}