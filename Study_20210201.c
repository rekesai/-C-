#include<stdio.h>
/*在屏幕上打印杨辉三角
      1
    1  1
  1  2  1
1  3  3   1
*/
//int main(){
//	int n = 0;
//	scanf("%d", &n);
//	int arr[10][10] = { 1 };
//	int i = 1;
//	int j = 1;
//	int b = 0;
//	for (i = 1; i < n ; i++){
//		arr[i][0] = 1;
//		arr[i][i] = 1;
//		for (j = 1; j < i; j++){
//			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	//打印看一下
//	for (i = 0; i < n; i++){
//		for (b = 1; b < n - i; b++){
//			printf("  ");
//		}
//		for (j = 0; j <= i; j++){
//			printf("%3d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//void print(int(*p)[5], int row, int col){
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < row; i++){
//		for (j = 0; j < col; j++){
//			printf("%d ", *(*(p + i) + j));
//			printf("%d ", p + i);
//			printf("%d ", *(p + i));
//			printf("%d ", *(p + i) + j);
//			//p是第一行的地址，p+i是第1+i的地址
//			//*(p+i)是第i+1行的首元素地址
//			//*(p+i)+j是第i+1行的地址+j个int
//		}
//		printf("\n");
//	}
//}
//int main(){
//	int arr[3][5] = { { 1, 2, 3, 4, 5 }, { 2, 3, 4, 5, 6 }, { 3, 4, 5, 6, 7 } };
//	print(arr, 3, 5);
//	return 0;
//}


//int main(){
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++){
//		printf("%d ", *(*p + i) );
//		printf("%d ", (*p)[i]);
//	}
//	return 0;
//}


//int main(){
//	int arr[10] = { 1, 2, 3, 4, 5 };
//	int *p1 = arr;//数组首元素的地址
//	int(*p2)[10] = &arr;
//	printf("%d\n", p1);
//	printf("%d\n", p1+1);
//	printf("%d\n", p2);
//	printf("%d\n", p2+1);
//	return 0;
//}



//int main(){
//	int arr[10] = { 0 };
//	int(*p)[10] = &arr;//数组指针，p指向数组的指针
//
//	char ch[5];
//	char(*pc)[5] = &ch;
//	return 0;
//}
//int main(){
//	char ch = 'a';
//	char* pc = &ch;
//	char* p = "abcdef";
//	printf("%s\n", p);
//
//	return 0;
//}