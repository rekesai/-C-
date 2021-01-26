#include<stdio.h>
#include"game.h"
void menu(){
	printf("*********************\n");
	printf("*****  1. play  *****\n");
	printf("*****  0. exit  *****\n");
	printf("*********************\n");
}
void game(char Id[]){
	char ret = 0;
	char board[ROW][COL];//初始化为空格
	//初始化棋盘
	InitBoard(board, ROW, COL);
	DisplayBoard(board, ROW, COL);
	while (1){
		PlayerMove(board, ROW, COL);
		ret = CheckWin(board, ROW, COL);
		if (ret != 'C'){
			break;
		}
		DisplayBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		if (ret != 'C'){
			break;
		}
		DisplayBoard(board, ROW, COL);
	}
	if (ret == '*'){
		printf("Congratulations！%s获胜\n", Id);
	}
	else if (ret == '#'){
		printf("很可惜，电脑获胜\n");
	}
	else if (ret == 'Q'){
		printf("平局\n");
		DisplayBoard(board, ROW, COL);
	}
}

int main(){
	srand((unsigned int)time(NULL));
	int input = 0;
	char Id[10] = { 0 };
	printf("请输入您的姓名：");
	scanf("%s", &Id);
	do{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input){
		case 1:
			game(Id);//三子棋游戏
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择！\n");
			break;
		}
	} while (input);
	return 0;
}