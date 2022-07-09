#pragma once
#include<time.h>
#include<stdlib.h>
#define AX 3
#define AY 3
void in_board(char a[AX][AY], int ax, int ay);
void player(char a[AX][AY], int ax, int ay);
void computer(char a[AX][AY], int ax, int ay);
void print(char a[AX][AY], int, int);
char judge(char a[AX][AY],int ax,int ay);

