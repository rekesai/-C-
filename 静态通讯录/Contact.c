#include"Contact.h"

//初始化通讯录
void InitContact(struct Contact* pc){
	pc->sz = 0;
	memset(pc->data, 0, sizeof(pc->data));//初始化内存memset(初始化date数组，初始化成0， 初始化多少)
}

//增加信息
void AddContact(struct Contact* pc){
	if (pc->sz == MAX){
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

//删除信息
static int FindByName(const struct Contact* pc, char DelName[]){//只需要在contact.c这个文件中使用的函数，
	int i = 0;
	for (i = 0; i < pc->sz; i++){
		if (strcmp(pc->data[i].name, DelName) == 0){
			return i;
		}
	}
	return -1;
}
void DelContact(struct Contact* pc){
	char DelName[NAME_MAX] = { 0 };
	if (pc->sz == 0){
		printf("通讯录为空，请先添加用户信息\n");
	}
	else{
		//先找到，再删除
		printf("请输入需要删除的用户的姓名\n");
		scanf("%s", &DelName);
		int pos = FindByName(pc, DelName);
		if (pos == -1){
			printf("通讯录中没有您输入的姓名\n");
		}
		else{
			int j = 0;
			for (j = pos; j < pc->sz-1; j++){
				pc->data[j] = pc->data[j + 1];
			}
			pc->sz--;
			system("cls");
			printf("删除成功\n");
		}
	}
}


//查找信息
void SearchContact(const struct Contact* pc){
	char SeaName[NAME_MAX];
	printf("请输入要查找的用户姓名\n");
	scanf("%s", SeaName);
	int pos = FindByName(pc, SeaName);
	system("cls");
	if (pos == -1){
		printf("通讯录中没有您输入的姓名\n");
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

//修改信息
void ModifyContact(struct Contact* pc){
	char ModName[NAME_MAX];
	printf("请输入要修改的用户姓名\n");
	scanf("%s", ModName);
	int pos = FindByName(pc, ModName);
	if (pos == -1){
		printf("通讯录中没有您输入的姓名\n");
	}
	else{
		printf("请输入姓名：");
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


//void SaveContact(struct Contact* pc){
//	FILE* pfOut = fopen("contact.dat", "wb");
//	if (pfOut == NULL){
//		printf("%s\n", strerror(errno));
//		return;
//	}
//	//写数据
//	int i = 0;
//	for (i = 0; i < pc->sz; i++){
//		fwrite(pc->data + i, sizeof(PeoInfo), 1, pfOut);
//	}
//	fclose(pfOut);
//	pfOut = NULL;
//}