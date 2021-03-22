#include<stdio.h>
#include<string.h>
//替换空格%20
void RepSpace(char* str, int length){
	//1.算出空格的个数
	int i = 0;
	int spcount = 0;
	for (i = 0; i < length; i++){
		if (str[i] == ' '){
			spcount++;
		}
	}

	//2.算出替换空格后新的长度和最后的位置
	int newlen = length + 2 * spcount;
	int pos = newlen - 1;

	//3.从后向前处理空格
	for (i = length - 1; i >= 0; i--){
		if (str[i] == ' '){
			str[pos--] = '0';
			str[pos--] = '2';
			str[pos--] = '%';
		}
		else{
			str[pos--] = str[i];
		}
	}
}
int main(){
	char str[1000] = "WE ARE HAPPY";
	int len = strlen(str);
	RepSpace(str, len);
	printf("%s\n", str);
	return 0;
}