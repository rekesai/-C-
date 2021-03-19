//通讯录相关功能函数的声明
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 20
#define ADDR_MAX 30
#define MAX 1000    //最多存MAX个人

//信息结构体
struct PeoInfo{
	char name[NAME_MAX];
	int age;
	char sex[SEX_MAX];
	char tele[TELE_MAX];
	char addr[ADDR_MAX];
};

//通讯录结构体
struct Contact{
	struct PeoInfo data[MAX];//存放1000人的信息的空间
	int sz;//表示当前通讯录中存放了几个人的信息
};


//初始化通讯录
void InitContact(struct Contact* pc){
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));//初始化内存memset(初始化date数组，初始化成0， 初始化多少)
}

//增加信息
void AddContact(struct Contact* pc){
	if (pc->sz == MAX){
		system("cls");
		printf("通讯录已满，无法添加\n");
	}
	else{
		printf("请输入姓名：");
		scanf("%s", pc->data[pc->sz].name);
		printf("请输入年龄：");
		scanf("%d", &(pc->data[pc->sz].age));//这里因为是整形所以需要取地址，其他的都是数组，数组名就是地址
		printf("请输入性别：");
		scanf("%s", pc->data[pc->sz].sex);
		printf("请输入电话号码：");
		scanf("%s", pc->data[pc->sz].tele);
		printf("请输入住址：");
		scanf("%s", pc->data[pc->sz].addr);
		pc->sz++;
		system("cls");
		printf("添加成功\n");
	}
}

//展示信息
void ShowContact(const struct Contact* pc){
	system("cls");
	if (pc->sz == 0){
		system("cls");
		printf("通讯录为空，请先添加用户信息\n");
	}
	else{
		int i = 0;
		printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话号码", "住址");
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

//通过对比字符串大小实现查找函数
static int FindByName(const struct Contact* pc, char DelName[]){//只需要在contact.c这个文件中使用的函数，
	int i = 0;
	for (i = 0; i < pc->sz; i++){
		if (strcmp(pc->data[i].name, DelName) == 0){  //strcmp字符串比较函数，如果两个字符串相等返回0
			return i;
		}
	}
	return -1;
}

//删除信息
void DelContact(struct Contact* pc){
	char DelName[NAME_MAX] = { 0 };
	if (pc->sz == 0){
		system("cls");
		printf("通讯录为空，请先添加用户信息\n");
	}
	else{
		//先找到，再删除
		printf("请输入需要删除的用户的姓名：");
		scanf("%s", &DelName);
		int pos = FindByName(pc, DelName);
		system("cls");
		if (pos == -1){
			printf("通讯录中没有您输入的姓名“%s”，请重新选择\n", DelName);
		}
		else{
			int j = 0;
			for (j = pos; j < pc->sz - 1; j++){
				pc->data[j] = pc->data[j + 1];
			}
			pc->sz--;
			printf("删除成功\n");
		}
	}
}


//查找信息
void SearchContact(const struct Contact* pc){
	char SeaName[NAME_MAX];
	if (pc->sz == 0){
		system("cls");
		printf("通讯录为空，请先添加用户信息\n");
	}
	else{
		printf("请输入要查找的用户姓名：");
		scanf("%s", SeaName);
		int pos = FindByName(pc, SeaName);
		system("cls");
		if (pos == -1){
			printf("通讯录中没有您输入的姓名“%s”，请重新选择\n", SeaName);
		}
		else{
			printf("%-15s\t%-5s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话号码", "住址");
			printf("%-15s\t%-5d\t%-5s\t%-12s\t%-20s\n",
				pc->data[pos].name,
				pc->data[pos].age,
				pc->data[pos].sex,
				pc->data[pos].tele,
				pc->data[pos].addr);
		}
	}
}

//修改信息
void ModifyContact(struct Contact* pc){
	char ModName[NAME_MAX];
	if (pc->sz == 0){
		system("cls");
		printf("通讯录为空，请先添加用户信息\n");
	}
	else{
		printf("请输入要修改的用户姓名：");
		scanf("%s", ModName);
		int pos = FindByName(pc, ModName);
		system("cls");
		if (pos == -1){
			printf("通讯录中没有您输入的姓名“%s”,请重新选择\n", ModName);
		}
		else{
			printf("您要将姓名为%s的用户修改为：", ModName);
			scanf("%s", pc->data[pos].name);
			printf("请输入年龄：");
			scanf("%d", &(pc->data[pos].age));//这里因为是整形所以需要取地址，其他的都是数组，数组名就是地址
			printf("请输入性别：");
			scanf("%s", pc->data[pos].sex);
			printf("请输入电话号码：");
			scanf("%s", pc->data[pos].tele);
			printf("请输入住址：");
			scanf("%s", pc->data[pos].addr);
			system("cls");
			printf("修改成功\n");
		}
	}
}



//主文件
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
	struct Contact con;//创建了一个通讯录

	//初始化结构体
	InitContact(&con);//改数据传地址

	do{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input){
		case ADD:
			AddContact(&con);//添加信息
			break;
		case DEL:
			DelContact(&con);//删除信息
			break;
		case SEARCH:
			SearchContact(&con);//查找信息
			break;
		case MODIFY:
			ModifyContact(&con);//修改信息
			break;
		case SHOW:
			ShowContact(&con);//展示信息
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
		}
	} while (input);
}

int main(){
	test();
	return 0;
}