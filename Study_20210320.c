#include<stdio.h>




//ģ��ʵ��memcpy
//void * memcpy(void * dst, const void * src, size_t count){
//	void * ret = dst;
//	assert(dst);
//	assert(src);
//	/*
//	* copy from lower addresses to higher addresses
//	*/
//	while (count--){
//		*(char *)dst = *(char *)src;
//		dst = (char *)dst + 1;
//		src = (char *)src + 1;
//	}
//	return (ret);
//}



//ģ��ʵ��memmove
//void * memmove(void * dst, const void * src, size_t count){
//	void * ret = dst;
//	if (dst <= src || (char *)dst >= ((char *)src + count)) {
//		/*
//		* Non-Overlapping Buffers
//		* copy from lower addresses to higher addresses
//		*/
//		while (count--) {
//			*(char *)dst = *(char *)src;
//			dst = (char *)dst + 1;
//			src = (char *)src + 1;
//		}
//	}
//	else {
//		/*
//		* Overlapping Buffers
//		* copy from higher addresses to lower addresses
//		*/
//		dst = (char *)dst + count - 1;
//		src = (char *)src + count - 1;
//		while (count--) {
//			*(char *)dst = *(char *)src;
//			dst = (char *)dst - 1;
//			src = (char *)src - 1;
//		}
//	}
//	return (ret);
//}



//ģ��ʵ��strlen
////��������ʽ
//int my_strlen(const char * str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
////���ܴ�����ʱ����������
//int my_strlen(const char * str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(str + 1);
//}
////ָ��-ָ��ķ�ʽ
//int my_strlen(char *s)
//{
//	char *p = s;
//	while (*p != '\0')
//		p++;
//	return p - s;
//}



//ģ��ʵ��strcpy
//char *my_strcpy(char *dest, const char*src)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while ((*dest++ = *src++))
//	{
//		;
//	}
//	return ret;
//}


//ģ��ʵ��strcmp
//int my_strcmp(const char * src, const char * dest)
//{
//	int ret = 0;
//	assert(src != NULL);
//	assert(dest != NULL);
//	while (!(ret = *(unsigned char *)src - *(unsigned char *)dest) && *dest){
//		++src, ++dest;
//	}
//	if (ret < 0){
//		ret = -1;
//	}
//	else if (ret > 0){
//		ret = 1;
//	}
//	return(ret);
//}



//ģ��ʵ��strcat
//char *my_strcat(char *dest, const char*src)
//{
//	char *ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest)
//	{
//		dest++;
//	}
//	while ((*dest++ = *src++))
//	{
//		;
//	}
//	return ret;
//}

//ģ��ʵ��strstr
//char *my_strstr(const char* str1, const char* str2){
//	assert(str1);
//	assert(str2);
//	char *cp = (char*)str1;
//	char *substr = (char *)str2;
//	char *s1 = NULL;
//	if (*str2 == '\0'){
//		return NULL;
//	}
//	while (*cp){
//		s1 = cp;
//		substr = str2;
//		while (*s1 && *substr && (*s1 == *substr)){
//			s1++;
//			substr++;
//		}
//		if (*substr == '\0'){
//			return cp;
//		}
//		cp++;
//	}
//}


//������������ʱ������������������������
//int main(){
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("����ǰ��a = %d b = %d\n", a, b);
//	a = a^b;
//	b = a^b;
//	a = a^b;
//	printf("������a = %d b = %d\n", a, b);
//	return 0;
//}
//дһ���꣬���Խ�һ�������ֵ�����λ��ż��λ������
//#define CHANGE(n) (((n) && 0x55555555) << 1 | ((n) && 0xaaaaaaaa) >> 1)
//int main(){
//	int a = 19;
//	int b = CHANGE(a);
//	printf("%d\n", b);
//	return 0;
//}