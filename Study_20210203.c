#include<stdio.h>
#include<string.h>
//1.数组名单独放在sizeof内部，数组名表示整个数组，计算的是整个数组的大小，单位是字节
//2.&数组名，数组名表示整个数组，取出的是整个数组的地址
//除上面2种情况之外，所有的数组名都是数组首元素的地址
//int main(){
//	int a[] = { 1, 2, 3, 4 };
//	printf("%d\n", sizeof(a));//16——数组名单独放在sizeof内部，计算的是数组的大小
//	printf("%d\n", sizeof(a + 0));//4/8——指向第一个元素的地址
//	printf("%d\n", sizeof(*a));//4——a是数组名，表示数组首元素地址，解引用数组首元素大小
//	printf("%d\n", sizeof(a + 1));//4/8——指向第二个元素的地址
//	printf("%d\n", sizeof(a[1]));//4——数组第二个元素
//	printf("%d\n", sizeof(&a));//4/8——&a是数组的地址，但是地址就是4/8个字节
//	printf("%d\n", sizeof(*&a));//16——与sizeof(a)等价，*&抵消了
//	printf("%d\n", sizeof(&a + 1));//4/8——&a+1是一个地址，指向的是数组之后的空间
//	printf("%d\n", sizeof(&a[0]));//4/8——首元素地址
//	printf("%d\n", sizeof(&a[0] + 1));//4/8——指向第二个元素地址
//	return 0;
//}

//int main(){
//	char arr[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
//	printf("%d\n", sizeof(arr));//6——数组名arr单独放在sizeof内部，计算的是整个数组的大小
//	printf("%d\n", sizeof(arr + 0));//4/8——arr是数组首元素的地址
//	printf("%d\n", sizeof(*arr));//1——*arr，arr是数组，*arr解引用数组首元素地址为首元素大小
//	printf("%d\n", sizeof(arr[1]));//1——数组第二个元素大小
//	printf("%d\n", sizeof(&arr));//4/8——&arr是整个数组的地址，是地址就是4/8个字节
//	printf("%d\n", sizeof(&arr + 1));//4/8——&arr+1跳过了整个数组，指向了数组之后的地址，还是地址
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8——数组第二个元素的地址
//
//	printf("%d\n", strlen(arr));//随机值——因为arr数组中本来没有'\0'，就会在数组arr之后继续找'\0'
//	printf("%d\n", strlen(arr + 0));//随机值
//	printf("%d\n", strlen(*arr));//error
//	printf("%d\n", strlen(arr[1]));//error
//	printf("%d\n", strlen(&arr));//随机值——数组地址
//	printf("%d\n", strlen(&arr + 1));//随机值-6——整个数组地址+1，跳过数组，在数组之后寻找'\0'，随机值-6
//	printf("%d\n", strlen(&arr[0] + 1));//随机值-1——数组首元素地址+1，跳过第一个数组，在第一个元素之后寻找'\0'，随机值-1
//	return 0;
//}


//sizeof（操作数）   操作符计算操作数的所占空间的大小
//计算大小的时候不在乎内存中放的值
//strlen——求  字符串  的长度
//只适用于：字符串，字符数组，找到'\0'为止
//int main(){
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7——计算arr数组总大小
//	printf("%d\n", sizeof(arr + 0));//4/8——arr+0是数组arr的首元素地址
//	printf("%d\n", sizeof(*arr));//1——*arr解引用数组名是数组首元素
//	printf("%d\n", sizeof(arr[1]));//1——数组第二个元素
//	printf("%d\n", sizeof(&arr));//4/8——取出整个数组地址，是地址
//	printf("%d\n", sizeof(&arr + 1));//4/8——数组之后的地址
//	printf("%d\n", sizeof(&arr[0] + 1));//4/8——数组第二个元素地址
//
//	printf("%d\n", strlen(arr));//6——这样的是首元素地址，不是sizeof，strlen是从当前地址向后找到'\0'为止
//	printf("%d\n", strlen(arr + 0));//6——首元素地址之后寻找'\0'
//	printf("%d\n", strlen(*arr));//error
//	printf("%d\n", strlen(arr[1]));//error
//	printf("%d\n", strlen(&arr));//6——首元素地址之后寻找'\0'
//	printf("%d\n", strlen(&arr + 1));//随机值-6——跳过数组线寻找'\0'
//	printf("%d\n", strlen(&arr[0] + 1));//5——跳过第一个元素之后寻找'\0'
//	return 0;
//}


//int main(){
//	char* p = "abcdef";
//	printf("%d\n", sizeof(p));//4/8——p是个指针变量
//	printf("%d\n", sizeof(p + 1));//4/8——p+1是字符'b'的地址
//	printf("%d\n", sizeof(*p));//1——p是字符指针，*p访问一个字节
//	printf("%d\n", sizeof(p[0]));//1——等价于*(p+0)
//	printf("%d\n", sizeof(&p));//4/8——取出p的地址，是地址
//	printf("%d\n", sizeof(&p + 1));//4/8——指向p之后的地址，是地址
//	printf("%d\n", sizeof(&p[0] + 1));//4/8——&p[0]+1是地址
//
//	printf("%d\n", strlen(p));//6——从第一个元素之后找'\0'
//	printf("%d\n", strlen(p + 1));//5——从第二个元素之后找'\0'
//	//printf("%d\n", strlen(*p));//error
//	//printf("%d\n", strlen(p[0]));//error
//	printf("%d\n", strlen(&p));//随机值
//	printf("%d\n", strlen(&p + 1));//随机值
//	printf("%d\n", strlen(&p[0] + 1));//5
//	return 0;
//}


//int main(){
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48——数组名单独放在sizeof里计算的是整个数组的大小
//	printf("%d\n", sizeof(a[0][0]));//4——第一个元素大小
//	printf("%d\n", sizeof(a[0]));//16——第一行数组名，数组名单独放在sizeof里计算的是整个数组的大小
//	printf("%d\n", sizeof(a[0] + 1));//4/8——a[0]作为第一行数组名并没有单独放在sizeof内部，所以数组名相当于数组首元素地址，就是第一行第一个元素的地址，+1就是第一行第二个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1)));	//4——第一行第二个元素大小
//	printf("%d\n", sizeof(a + 1));//4/8——a作为二维数组的数组名，没有&，也没有单独放在sizeof内部，那么数组名a就是首元素的地址，a+1是第二行的地址，是地址
//	printf("%d\n", sizeof(*(a + 1)));//16——对第二行的地址解引用就是第二行
//	printf("%d\n", sizeof(&a[0] + 1));//4/8——&a[0]第一行的地址，+1就是第二行地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16——第二行大小
//	printf("%d\n", sizeof(*a));//16——*a=*(a+0)=a[0],第一行大小
//	//a是二维数组的数组名，没有&，没有单独放在sizeof内部，所以a是二维数组首元素地址，就是第一行地址
//	//所以*a就是第一行
//	printf("%d\n", sizeof(a[3]));//16——通过二维数组确定a[3]的类型
//	//a[3]，只是说要计算这种类型的大小，并不需要访问空间
//	return 0;
//}


//int main(){
//	int a[5] = { 1, 2, 3, 4, 5 };
//	int* ptr = (int *)(&a + 1);
//	printf("%d %d\n", *(a + 1), *(ptr - 1));
//	return 0;
//}


//int main(){
//	int a[4] = { 1, 2, 3, 4 };
//	int* ptr1 = (int *)(&a + 1);
//	int* ptr2 = (int *)((int)a + 1);
//	printf("%x %x\n", ptr1[-1], *ptr2);
//	return 0;
//}
int main(){
	char *a[] = { "work", "at", "alibaba" };
	char**pa = a;
	pa++;
	printf("%s\n", *pa);
	return 0;
}

