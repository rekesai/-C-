#include<stdio.h>//һ������c�����ṩ�Ŀ⺯����ͷ�ļ������ʹ��ֱ��ȥ��Ŀ¼�²���
#include"add.h"//һ�������Զ����ͷ�ļ������ʹ������ȥ��ǰ���̵�Ŀ¼�²���
#include<stddef.h>

#define OFFSETOF(struct_name, member_name)   (int)&(((struct_name*)0)->member_name)//��0ת��Ϊ�ṹ������ָ���Ա���ó���Աȡ��ַ��ת��int���Ӷ��õ���Աƫ����
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


////#if������ǳ�������ʽ��δ֪��
//int main(){
//#if 2-2
//	printf("5\n");
//#elif 3-4
//	printf("-1\n");
//#elif 5-5
//	printf("0\n");
//#elif{
//	printf("��ȰͲ�");
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
//#define MALLOC(num, type) (type*)malloc(num*sizeof(type))//����԰����͵�����
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