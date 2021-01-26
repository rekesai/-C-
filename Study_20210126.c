#include<stdio.h>
//写一个函数返回参数的2进制中 1 的个数
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
//写一个函数返回参数的2进制中 1 的个数（标准答案）
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


//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//int main(){
//	int num = 0;
//	scanf("%d", &num);
//	int i = 0;
//	printf("奇数位序列：");
//	for (i = 30; i >=0; i -= 2){//向右移30位就是第31位，从第31位开始
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位序列：");
//	for (i = 31; i >=0; i -= 2){////向右移31位就是第32位，从第32位开始
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}


//输入两个整数，求两个整数二进制格式有多少个位不同
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
//	int a = 3 + (2 - 4) * 6;//根据优先级
//	int b = 3 + 5 + 8;//相邻两个操作符优先级相同，与结合性相关
//
//	return 0;
//}


//struct Stu{
//	//结构成员
//	char name[20];//名字
//	int age;
//	char sex[5];
//};
//int main(){
//	struct Stu s = {"张三", 20, "男"};
//	//printf("%s\n", s.name);
//	//printf("%d\n", s.age);
//	//printf("%s\n", s.sex);
//
//	//通过指针
//	struct Stu *ps = &s;
//	//拿到了ps
//	printf("%s\n", (*ps).name);//两种方法等价
//	printf("%s\n", ps->name);//->    结构的指针->结构成员
//	
//	return 0;
//}

//int main(){
//	int arr[10] = { 0 };
//	arr[4] = 4;//[ ]-下标引用操作符，[ ]的操作数，arr ,下标(4)
//
//	return 0;
//}


//int main(){
//	//逗号表达式，从左向右依次执行，整个表达式的结果是最后面表达式的结果
//	int a = 1;
//	int b = 2;
//	int c = (a > b, a = b + 10, a, b = a + 1);
//	printf("%d\n", c);
//	return 0;
//}


//int main(){
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	//i = a++ && ++b && d++;
//	//逻辑与一假则假，所以a++这里先用为假的时候，后面的条件就不判断了，称作短路运算
//	i = a++ || ++b || d++;
//	//逻辑或一真为真，所以++b这里为真，后面的条件就不判断
//	printf("a = %d\nb = %d\nc = %d\nd = %d\n", a, b, c, d);
//	printf("i = %d\n", i);
//	return 0;
//}


//int main(){
//	int a = 4;
//	int b = 3;
//	int c = a&&b;// --逻辑与，一假则假
//	int d = a || b;// --逻辑或，一真则真
//	printf("%d\n", c);
//	printf("%d\n", d);
//	return 0;
//}


//int main(){
//	int a = 10;
//	int b = ++a;//前置++  先加一，后使用
//	int c = a++;//后置++，先使用，后加一
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//int main(){
//	int a = 0;
//	//00000000000000000000000000000000-原码
//	//11111111111111111111111111111111-补码
//	//11111111111111111111111111111110-补码-1
//	//10000000000000000000000000000001   -1
//	//打印出的值是原码对应的值
//	printf("%d\n", ~a);//~ ——按位取反
//	return 0;
//}