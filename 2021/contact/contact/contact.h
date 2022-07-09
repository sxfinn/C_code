#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#define NUM 20
#include<string.h>
#include<stdlib.h>
#define START 3
#define INC 2
typedef struct infma
{
	char name[NUM];
	char number[NUM];
	char addr[NUM];
	int age;
}infma;

enum option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};

typedef struct CONTACT
{
	infma* data;
	int sz;
	int capasity;
}CONTACT;

void meum();

int init_Contact(CONTACT* p);

void print(CONTACT* p);

void Contact_Add(CONTACT* p);

void del_contact(CONTACT*);

void search(CONTACT*);

void mod_contact(CONTACT*);

void sortby_name(CONTACT*);
