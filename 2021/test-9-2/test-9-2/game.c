#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
int number(char a[ROWS][COLS], int x, int y) 
{
	return a[x - 1][y] +
		a[x - 1][y - 1] +
		a[x - 1][y + 1] +
		a[x][y - 1] +
		a[x][y + 1] +
		a[x + 1][y - 1] +
		a[x + 1][y] +
		a[x + 1][y + 1] - 8 * '0';
}
void maun()
{
	printf("*************\n");
	printf("****1>play***\n");
	printf("****0>exit***\n");
	printf("*************\n");
	printf("请输入1或者0：\n");
}


//初始化
void inite(char a[ROWS][COLS],char b[ROWS][COLS], int rows, int cols)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			a[i][j] = '0';
		}
	}
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			b[i][j] = '*';
		}
	}
}

void print(char a[ROWS][COLS],int row,int col)
{
	int i = 0;
	int j = 0;
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c " ,a[i][j]);
		}
		printf("\n");
	}
}
//布置雷
void set(char a[ROWS][COLS],int row, int col)
{
	int sum =count;
	while (sum>0)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (a[x][y] == '0')
		{
			a[x][y] = '1';
			sum--;
		}
	}
}
//排查雷
void search(char a[ROWS][COLS],char b[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int n = 0;
	while (n<COL*ROW-count) 
	{
		printf("请输入要排查的坐标：\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col&&a[x][y]!='2')
		{
			if (a[x][y] == '1')
			{
				printf("雷炸了你死了\n");
				print(a, ROW, COL);
				break;
			}
			else
			{
				printf("这不是雷,游戏继续\n");
				a[x][y] = '2';
				int lei = number(a, x, y);
				b[x][y] = lei + '0';
				print(b, ROW, COL);
				n++;

			}
		}
		else
		{
			printf("输入错误，请重新输入：\n");
		}
	}
	if (n == col * row - count)
	{
		printf("恭喜你扫雷结束\n");
	}
}