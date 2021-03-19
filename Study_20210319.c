#include<stdio.h>//一般用于c语言提供的库函数的头文件，如果使用直接去库目录下查找
#include"add.h"//一般用于自定义的头文件，如果使用首先去当前工程的目录下查找
#include<stddef.h>

#define OFFSETOF(struct_name, member_name)   (int)&(((struct_name*)0)->member_name)//将0转化为结构体类型指向成员，拿出成员取地址再转化int，从而得到成员偏移量
struct S{
	char c;
	int i;
	double d;
};
int main(){
	printf("%d\n", OFFSETOF(struct S, c));
	printf("%d\n", OFFSETOF(struct S, i));
	printf("%d\n", OFFSETOF(struct S, d));
	return 0;
}



//int main(){
//#ifdef PRINT
//	printf("biubiu\n");
//#endif
//#ifndef PRINT
//	printf("biabiaibia\n");
//#endif
//#if defined(PRINT)
//	printf("poi\n");
//#endif
//#if !defined(PRINT)
//	printf("aleilei\n");
//#endif
//	return 0;
//}


////#if后必须是常量表达式（未知）
//int main(){
//#if 2-2
//	printf("5\n");
//#elif 3-4
//	printf("-1\n");
//#elif 5-5
//	printf("0\n");
//#elif{
//	printf("歪比巴卜");
//	}
//#endif
//
//	return 0;
//}


//#define __DEBUG__
//int main(){
//	int i = 0;
//	for (i = 0; i < 10; i++){
//		printf("%d ", i);
//#ifdef __DEBUG__
//		printf("hehe\n");
//#endif
//#if 1
//		printf("biubiu\n");
//#endif
//	}
//	return 0;
//}
//#define MAX(X,Y) (X)>(Y)?(X):(Y)
//#define MALLOC(num, type) (type*)malloc(num*sizeof(type))//宏可以把类型当参数
//#define MAX 100
//int main(){
//	printf("%d\n", MAX);
//#undef MAX
//	printf("%d\n", MAX);
//	return 0;
//}
//int MAX(int x, int y){
//	return x > y ? x : y;
//}
//int main(){
//	int a = 10;
//	int b = 20;
//	int c = MAX(a, b);
//	printf("%d\n", c);
//	return 0;
//}