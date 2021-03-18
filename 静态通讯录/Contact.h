//通讯录相关功能函数的声明
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>

#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 20
#define ADDR_MAX 30
#define MAX 1000    //最多存MAX个人

//信息结构体
typedef struct PeoInfo{
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

//函数的声明
void InitContact(struct Contact* pc);//初始化结构体
void AddContact(struct Contact* pc);//增加一个人的信息
void ShowContact(const struct Contact* pc);//展示通讯录中信息（这个函数不需要修改功能，只需要展示）
void DelContact(struct Contact* pc);//删除某个信息
void SearchContact(const struct Contact* pc);//查找某个信息
void ModifyContact(struct Contact* pc);//修改某个信息

//保存数据到文件
void SaveContact(struct Contact* pc);