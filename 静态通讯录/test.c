//测试整个通讯录逻辑
/*通讯录需求
可以保存1000个人的信息
信息包括：
	姓名
	年龄
	性别
	电话
	住址

功能：
1.增加一个人的信息
2.删除一个人
3.查找指定信息
4.修改一个人的信息
5.显示通讯录中所有人的信息
0.退出
*/


#include"Contact.h"



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
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
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