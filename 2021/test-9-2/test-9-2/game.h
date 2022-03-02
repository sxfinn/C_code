#pragma once
#define ROWS ROW+2
#define COLS COL+2
#define ROW 9
#define COL 9
#define count 10
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void maun();
void inite(char a[ROWS][COLS], char b[ROWS][COLS], int rows, int cols);
void set(char a[ROWS][COLS],int row,int col);
void print(char a[ROWS][COLS], int row, int col);
void search(char a[ROWS][COLS], char b[ROWS][COLS], int row, int col);