#include<stdio.h>
#include<string.h>
//�滻�ո�%20
void RepSpace(char* str, int length){
	//1.����ո�ĸ���
	int i = 0;
	int spcount = 0;
	for (i = 0; i < length; i++){
		if (str[i] == ' '){
			spcount++;
		}
	}

	//2.����滻�ո���µĳ��Ⱥ�����λ��
	int newlen = length + 2 * spcount;
	int pos = newlen - 1;

	//3.�Ӻ���ǰ�����ո�
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