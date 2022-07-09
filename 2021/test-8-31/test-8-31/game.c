#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

#include"game.h"
//棋盘初始化
void in_board(char a[AX][AY],int ax,int ay)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ax; i++)
	{
		for (j = 0; j < ay; j++)
		{
			a[i][j] = ' ';
		}
	}
	
}
//打印棋盘
void print(char a[AX][AY],int ax,int ay)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ax; i++)
	{
		for (j = 0; j < ay; j++)
		{
			printf(" %c ", a[i][j]);
			if(j<ay-1)
			printf("|");
			
		}
		printf("\n");
		if (i < ax - 1)
		{
			for (j = 0; j < ay; j++)
			{
				printf("---");
				if (j < ay - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
//玩家下棋
void player(char a[AX][AY], int ax, int ay)
{
	int i = 0;
	int j = 0;
	printf("玩家下棋");
	while (1)
	{
		printf("\n请输入格子行列数");
		scanf("%d %d", &i, &j);
		if (i > 0 && i <= ax && j <= ay && j > 0&&a[i-1][j-1]==' ')
		{
			a[i - 1][j - 1] = '#';
			break;
		}
		else
			printf("坐标非法，请重新输入\n");
	}
}
//电脑下棋
void computer(char a[AX][AY], int ax, int ay)
{
	printf("电脑下棋\n");
	while (1)
	{
		int i = rand()%ax;
		int j = rand()%ay;
		
		if (a[i][j] == ' ')
		{
			a[i][j] = '*';
			break;
		}
	}
}
//判断是否结束
char judge(char a[AX][AY], int ax, int ay)
{
	int i = 0;
	int j = 0;
	int tmp = 0;
	char ret = 0;
	for (i = 0; i < ax; i++)
	{
		tmp = 0;
		for (j = 0; j < ay-1; j++)
		{
			if ((a[i][j] == a[i][j + 1]) && a[i][j] != ' ')
			{
				;
			}
			else
			{
				tmp = 1;
				break;
			}
		}
		if (tmp == 0)
		{
			return a[i][j];
		}
	}
	
	for (j = 0; j < ay; j++)
	{
		tmp = 0;
		for (i = 0; i <ax-1 ; i++)
		{
			if ((a[i][j] == a[i + 1][j]) && a[i][j] != ' ')
			{
				;
			}
			else
			{
				tmp = 1;
				break;
			}
		}
		if (tmp == 0)
		{
			return a[i][j];
		}
	}
	
	for (i = 0,j=0; i < ax-1&&j<ay-1; i++,j++)
	{
		tmp = 0;
		if (a[i][j] == a[i + 1][j + 1] && a[i][j] != ' ')
		{
			;
		}
		else
		{
			tmp = 1;
			break;
		}
	}
	if (tmp == 0)
	{
		return a[i][j];
	}
	tmp = 0;
	for (i = 0, j = ay-1;i<ax-1&&j>0; i++, j--)
	{
		if (a[i][j] == a[i + 1][j - 1]&&a[i][j]!=' ')
		{
			;
		}
		else
		{
			tmp = 1;
			break;
		}
	}
	if (tmp == 0)
		return a[i][j];
	
	for (i = 0; i < ax; i++)
	{
		for (j = 0; j < ay; j++)
		{
			if (a[i][j] == ' ')
			{
				return 'c';
				
			}
		}
	}
	return 'p';
}