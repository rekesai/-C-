//ͨѶ¼��ع��ܺ���������
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 20
#define ADDR_MAX 30
#define MAX 1000    //����MAX����

//��Ϣ�ṹ��
struct PeoInfo{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};

//ͨѶ¼�ṹ��
struct Contact{
	struct PeoInfo data[MAX];//���1000�˵���Ϣ�Ŀռ�
	int sz;//��ʾ��ǰͨѶ¼�д���˼����˵���Ϣ
};


//��ʼ��ͨѶ¼
void InitContact(struct Contact* pc){
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));//��ʼ���ڴ�memset(��ʼ��date���飬��ʼ����0�� ��ʼ������)
}

//������Ϣ
void AddContact(struct Contact* pc){
	if (pc->sz == MAX){
		system("cls");
		printf("ͨѶ¼�������޷�����\n");
	}
	else{
		printf("������������");
		scanf("%s", pc->data[pc->sz].name);
		printf("���������䣺");
		scanf("%d", &(pc->data[pc->sz].age));//������Ϊ������������Ҫȡ��ַ�������Ķ������飬���������ǵ�ַ
		printf("�������Ա�");
		scanf("%s", pc->data[pc->sz].sex);
		printf("������绰���룺");
		scanf("%s", pc->data[pc->sz].tele);
		printf("������סַ��");
		scanf("%s", pc->data[pc->sz].addr);
		pc->sz++;
		system("cls");
		printf("���ӳɹ�\n");
	}
}

//չʾ��Ϣ
void ShowContact(const struct Contact* pc){
	system("cls");
	if (pc->sz == 0){
		system("cls");
		printf("ͨѶ¼Ϊ�գ����������û���Ϣ\n");
	}
	else{
		int i = 0;
		printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰����", "סַ");
		for (i = 0; i < (pc->sz); i++){
			printf("%-15s\t%-5d\t%-5s\t%-12s\t%-20s\n",
				pc->data[i].name,
				pc->data[i].age,
				pc->data[i].sex,
				pc->data[i].tele,
				pc->data[i].addr);
		}
	}
}

//ͨ���Ա��ַ�����Сʵ�ֲ��Һ���
static int FindByName(const struct Contact* pc, char DelName[]){//ֻ��Ҫ��contact.c����ļ���ʹ�õĺ�����
	int i = 0;
	for (i = 0; i < pc->sz; i++){
		if (strcmp(pc->data[i].name, DelName) == 0){  //strcmp�ַ����ȽϺ�������������ַ�����ȷ���0
			return i;
		}
	}
	return -1;
}

//ɾ����Ϣ
void DelContact(struct Contact* pc){
	char DelName[NAME_MAX] = { 0 };
	if (pc->sz == 0){
		system("cls");
		printf("ͨѶ¼Ϊ�գ����������û���Ϣ\n");
	}
	else{
		//���ҵ�����ɾ��
		printf("��������Ҫɾ�����û���������");
		scanf("%s", &DelName);
		int pos = FindByName(pc, DelName);
		system("cls");
		if (pos == -1){
			printf("ͨѶ¼��û���������������%s����������ѡ��\n", DelName);
		}
		else{
			int j = 0;
			for (j = pos; j < pc->sz - 1; j++){
				pc->data[j] = pc->data[j + 1];
			}
			pc->sz--;
			printf("ɾ���ɹ�\n");
		}
	}
}


//������Ϣ
void SearchContact(const struct Contact* pc){
	char SeaName[NAME_MAX];
	if (pc->sz == 0){
		system("cls");
		printf("ͨѶ¼Ϊ�գ����������û���Ϣ\n");
	}
	else{
		printf("������Ҫ���ҵ��û�������");
		scanf("%s", SeaName);
		int pos = FindByName(pc, SeaName);
		system("cls");
		if (pos == -1){
			printf("ͨѶ¼��û���������������%s����������ѡ��\n", SeaName);
		}
		else{
			printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰����", "סַ");
			printf("%-15s\t%-5d\t%-5s\t%-12s\t%-20s\n",
				pc->data[pos].name,
				pc->data[pos].age,
				pc->data[pos].sex,
				pc->data[pos].tele,
				pc->data[pos].addr);
		}
	}
}

//�޸���Ϣ
void ModifyContact(struct Contact* pc){
	char ModName[NAME_MAX];
	if (pc->sz == 0){
		system("cls");
		printf("ͨѶ¼Ϊ�գ����������û���Ϣ\n");
	}
	else{
		printf("������Ҫ�޸ĵ��û�������");
		scanf("%s", ModName);
		int pos = FindByName(pc, ModName);
		system("cls");
		if (pos == -1){
			printf("ͨѶ¼��û���������������%s��,������ѡ��\n", ModName);
		}
		else{
			printf("��Ҫ������Ϊ%s���û��޸�Ϊ��", ModName);
			scanf("%s", pc->data[pos].name);
			printf("���������䣺");
			scanf("%d", &(pc->data[pos].age));//������Ϊ������������Ҫȡ��ַ�������Ķ������飬���������ǵ�ַ
			printf("�������Ա�");
			scanf("%s", pc->data[pos].sex);
			printf("������绰���룺");
			scanf("%s", pc->data[pos].tele);
			printf("������סַ��");
			scanf("%s", pc->data[pos].addr);
			system("cls");
			printf("�޸ĳɹ�\n");
		}
	}
}



//���ļ�
void menu(){
	printf("******************************\n");
	printf("***** 1.add     2.del    *****\n");
	printf("***** 3.search  4.modify *****\n");
	printf("***** 5.show	0.exit   *****\n");
	printf("******************************\n");
	printf("******************************\n");

}

enum Option{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
};


void test(){
	int input = 0;
	struct Contact con;//������һ��ͨѶ¼

	//��ʼ���ṹ��
	InitContact(&con);//�����ݴ���ַ

	do{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input){
		case ADD:
			AddContact(&con);//������Ϣ
			break;
		case DEL:
			DelContact(&con);//ɾ����Ϣ
			break;
		case SEARCH:
			SearchContact(&con);//������Ϣ
			break;
		case MODIFY:
			ModifyContact(&con);//�޸���Ϣ
			break;
		case SHOW:
			ShowContact(&con);//չʾ��Ϣ
			break;
		case EXIT:
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("�����������������\n");
		}
	} while (input);
}

int main(){
	test();
	return 0;
}