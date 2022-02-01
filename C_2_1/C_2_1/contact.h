#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#define MAXNAME 20
#define MAXNUMBER 20
#define MAXADDR 20
#define MAXSIZE 100

typedef struct Information
{
	char name[MAXNAME];
	char number[MAXNUMBER];
	int age;
	char address[MAXADDR];
}Information;

typedef struct Contact
{
	Information data[MAXSIZE];
	int sz;
}Contact;

void menu();
void Init(Contact* addrBook);
void show(Contact* addrBook);
void Add(Contact* addrBook);
void Del(Contact* addrBook);
int Find(Contact* addrBook, char name[MAXNAME]);
void Search(Contact* addrBook);
void Modify(Contact* addrBook);