#include<stdio.h>
//дһ���������ز�����2������ 1 �ĸ���
//int count(int num){
//	int ret = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++){
//		if (num >= 0){
//			if (((num >> i) & 1) == 1){
//				ret++;
//			}
//		}
//	}
//	return ret;
//}
//int main(){
//	int num = 0;
//	scanf("%d", &num);
//	printf("%d\n", count(num));
//	return 0;
//}
//дһ���������ز�����2������ 1 �ĸ�������׼�𰸣�
//int count_one_bit(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}


//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//int main(){
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	printf("����λ���У�");
//	for (i = 30; i >=0; i -= 2){//������30λ���ǵ�31λ���ӵ�31λ��ʼ
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ���У�");
//	for (i = 31; i >=0; i -= 2){////������31λ���ǵ�32λ���ӵ�32λ��ʼ
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}


//�����������������������������Ƹ�ʽ�ж��ٸ�λ��ͬ
//int main(){
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int c = a ^ b;
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++){
//		if (((c >> i) & 1) == 1){
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int fun(){
//	static int count = 1;
//	return ++count;
//}
//int main(){
//	int answer;
//	answer = fun() - fun() * fun();
//	printf("%d\n", answer);
//	return 0;
//}


//int main(){
//	int a = 3 + (2 - 4) * 6;//�������ȼ�
//	int b = 3 + 5 + 8;//�����������������ȼ���ͬ�����������
//
//	return 0;
//}


//struct Stu{
//	//�ṹ��Ա
//	char name[20];//����
//	int age;
//	char sex[5];
//};
//int main(){
//	struct Stu s = {"����", 20, "��"};
//	//printf("%s\n", s.name);
//	//printf("%d\n", s.age);
//	//printf("%s\n", s.sex);
//
//	//ͨ��ָ��
//	struct Stu *ps = &s;
//	//�õ���ps
//	printf("%s\n", (*ps).name);//���ַ����ȼ�
//	printf("%s\n", ps->name);//->    �ṹ��ָ��->�ṹ��Ա
//	
//	return 0;
//}

//int main(){
//	int arr[10] = { 0 };
//	arr[4] = 4;//[ ]-�±����ò�������[ ]�Ĳ�������arr ,�±�(4)
//
//	return 0;
//}


//int main(){
//	//���ű���ʽ��������������ִ�У���������ʽ�Ľ������������ʽ�Ľ��
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);
//	return 0;
//}


//int main(){
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	//�߼���һ����٣�����a++��������Ϊ�ٵ�ʱ�򣬺���������Ͳ��ж��ˣ�������·����
//	i = a++ || ++b || d++;
//	//�߼���һ��Ϊ�棬����++b����Ϊ�棬����������Ͳ��ж�
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	printf("i = %d\n", i);
//	return 0;
//}


//int main(){
//	int a = 4;
//	int b = 3;
//	int c = a&&b;// --�߼��룬һ�����
//	int d = a || b;// --�߼���һ������
//	printf("%d\n", c);
//	printf("%d\n", d);
//	return 0;
//}


//int main(){
//	int a = 10;
//	int b = ++a;//ǰ��++  �ȼ�һ����ʹ��
//	int c = a++;//����++����ʹ�ã����һ
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//int main(){
//	int a = 0;
//	//00000000000000000000000000000000-ԭ��
//	//11111111111111111111111111111111-����
//	//11111111111111111111111111111110-����-1
//	//10000000000000000000000000000001   -1
//	//��ӡ����ֵ��ԭ���Ӧ��ֵ
//	printf("%d\n", ~a);//~ ������λȡ��
//	return 0;
//}