#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
#include"game.h"
void game()
{
	char ret = '\0';
	char board[AX][AY];//创建数组变量
	in_board(board,AX,AY);//初始化棋盘
	print(board, AX, AY);//打印棋盘
	while (1)
	{
		player(board, AX, AY);//玩家下棋
		print(board, AX, AY);
		ret=judge(board, AX, AY);
		if (ret != 'c')
			break;
		computer(board, AX, AY);//电脑下棋
		print(board, AX, AY);
		ret=judge(board, AX, AY);
		if (ret != 'c')
			break;
			
	}
	if (ret == '#')
	{
		printf("玩家赢\n");
		print(board, AX, AY);
	}
	else if (ret == '*')
	{
		printf("电脑赢\n");
		print(board, AX, AY);
	}
	else if (ret == 'p')
	{
		printf("平局\n");
		print(board, AX, AY);
	}
	

	

		

}

int main()
{
	int input = 0;
	srand((unsigned)time(NULL));
	do
	{
		printf("*************\n");
		printf("****1>play***\n");
		printf("****0.exit***\n");
		printf("*************\n");
		printf("请输入1或者0：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:printf("三子棋游戏开始\n");
			game();
			break;
		case 0:printf("游戏退出");
			break;
		default:printf("输入错误，请重新输入");
			break;
		}

	} while (input);
	return 0;
}