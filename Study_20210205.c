#include<stdio.h>
#include<assert.h>
#include<string.h>


/*
5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
Aѡ��˵��B�ڶ����ҵ�����
Bѡ��˵���ҵڶ���E���ģ�
Cѡ��˵���ҵ�һ��D�ڶ���
Dѡ��˵��C����ҵ�����
Eѡ��˵���ҵ��ģ�A��һ��
����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
*/
//int main(){
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++){
//		for (b = 1; b <= 5; b++){
//			for (c = 1; c <= 5; c++){
//				for (d = 1; d <= 5; d++){
//					for (e = 1; e <= 5; e++){
//						if (((b == 2) + (a == 3) == 1) && ((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) && ((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1)){
//							if (a*b*c*d*e == 120){
//								printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


/*�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
����Ϊ4�����ɷ��Ĺ��� :
A˵�������ҡ�
B˵����C��
C˵����D��
D˵��C�ں�˵
��֪3����˵���滰��1����˵���Ǽٻ���
�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
*/
//int main(){
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++){
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3){
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}



//my_memmove(void* dest, const void* src, size_t count){
//	void* ret = dest;
//	assert(dest && src);
//	if (dest < src){
//		while (count--){
//			*(char*)dest = *(char*)src;
//			++(char*)dest;  //((char*)dest)++
//			++(char*)src;    //((char*)src)++
//		}
//	}
//	else{
//		while (count--){
//			*((char*)dest + count) = *((char*)src + count);
//		}
//	}
//	return ret;
//}
//void* my_memcpy(void* dest, const void* src, size_t count){
//	void* ret = dest;
//	assert(dest && src);
//	while (count--){
//		*(char*)dest = *(char*)src;
//		++(char*)dest;  //((char*)dest)++
//		++(char*)src;    //((char*)src)++
//	}
//	return ret;
//}
//int main(){
//	int arr1[] = { 1, 2, 3, 4, 5, 6 };
//	int arr2[20] = { 0 };
//	my_memcpy(arr2, arr1, 16);
//	int i = 0;
//	for (i = 0; i < 20; i++){
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}