#include<stdio.h>
#include<stdio.h>
#include<string.h>
#include<errno.h>

//struct Stu{
//	char name[20];
//	int age;
//	float score;
//};
//int main(){
//	struct Stu s = { "zhangsan", 20, 66.56f };
//	FILE* pf = fopen("data.txt", "rb");
//	if (pf == NULL){
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//���ļ�
//	fread(&s, sizeof(s), 1, pf);
//	printf("%s %d %f\n", s.name, s.age, s.score);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//struct Stu{
//	char name[20];
//	int age;
//	float score;
//};
//int main(){
//	struct Stu s = { "zhangsan", 20, 66.56 };
//	FILE* pf = fopen("data.txt", "wb");
//	if (pf == NULL){
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//  //д�ļ�
//	fwrite(&s, sizeof(s), 1, pf);
//	
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//struct Stu{
//	char name[20];
//	int age;
//	float score;
//};
//int main(){
//	struct Stu s = { "zhangsan", 20, 66.0 };
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL){
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	//��ʽ����д��
//	fprintf(pf, "%s %d %f", s.name, s.age, s.score);
//	
//	//��ʽ����ȡ
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main(){
//	char arr[1024] = { 0 };
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL){
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	//ѭ�����ж�ȡ
//	//while (fgets(arr, 100, pf) != NULL){
//	//	printf("%s\n", arr);
//	//}
//
//	//fgets(arr, 100, pf);//ֻ�ܶ�һ��ǰ100���ַ�
//	//printf("%s\n", arr);
//
//	//��׼������
//	//fgets(arr, 100, stdin);
//	//printf("%s\n", arr);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main(){
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL){
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	fputs("hello bit\n", pf);//һ�β���һ�У��ɼ�\n����
//	fputs("hello world\n", pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main(){
//	int ch = fgetc(stdin);
//	printf("%c\n", ch);
//	return 0;
//}


//int main(){
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL){
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF){
//		printf("%c", ch);
//	}
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//int main(){
//	FILE* pf = fopen("data.txt", "w");
//	if (pf == NULL){
//		printf("%s\n", strerror(errno));
//		return 1;
//	}
//
//	fputc('a', pf);
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//enum Color{
//	Red,
//	Bule,
//	Green = 1,
//	Black,
//	White
//};
//int main(){
//	enum Color c = Black;
//	printf("%d\n", c);
//	return 0;
//}


//struct Book{
//	char name[20];
//	char auther[20];
//	short price;
//}b1;
//
//int main(){
//	struct Book b1 = { "�����ľ���", "��ɽ��", 20 };
//	printf("%s %s %d\n", b1.name, b1.auther, b1.price);
//
//	return 0;
//}


//struct A{
//	int i;
//	char cha;
//	double d;
//};
//struct B{
//	char chb;
//	struct A a;
//	short sh;
//};
//int main(){
//	struct B b = { 'a', { 2, 'b', 3.14 }, 3 };
//	printf("%lf\n", b.a.d);
//	return 0;
//}