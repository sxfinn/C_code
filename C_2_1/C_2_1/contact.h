#define _CRT_SECURE_NO_WARNINGS 1
//ÎÄ¼þ±£´æ°æ
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<assert.h>
#include<errno.h>
#define MAXNAME 20
#define MAXNUMBER 20
#define MAXADDR 20
#define MAXSIZE 100
#define DEFAULT_SZ 3
typedef struct Information
{
	char name[MAXNAME];
	char number[MAXNUMBER];
	int age;
	char address[MAXADDR];
}Information;

typedef struct Contact
{
	Information* data;
	int sz;
	int capacity;
}Contact;

void menu();
void Init(Contact* addrBook);
void show(Contact* addrBook);
void Add(Contact* addrBook);
void Del(Contact* addrBook);
int Find(Contact* addrBook, char name[MAXNAME]);
void Search(Contact* addrBook);
void Modify(Contact* addrBook);
void Destroy(Contact* addrBook);
int cmp(const void* e1, const void* e2);
void sort(Contact* addrBook);
void Save(Contact* addBook);
void reload(Contact* addrBook);