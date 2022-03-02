#include"contact.h"
void meum()
{
	printf("******   <通讯录>  *******\n");
	printf("******1.ADD    2.DEL******\n");
	printf("******3.SEARCH 4.MODIF****\n");
	printf("******5.SORT   6.PRINT****\n");
	printf("******    0.EXIT   *******\n");
}	

int init_Contact(CONTACT* p)
{
	
	p->data = calloc(START, sizeof(infma));
	if (p->data == NULL)
	{
		perror("通讯录创建失败");
		return 1;
	}
	p->sz = 0;
	p->capasity = START;
	printf("通讯录创建成功\n");
	return 0;
}

void Contact_Add(CONTACT* p)
{
	if (p->sz == p->capasity)
	{
		infma*tmp = (infma*)realloc(p->data, (p->capasity + INC)*sizeof(infma));
		if (tmp != NULL)
		{
			p->data = tmp;
			p->capasity = p->capasity + INC;
			printf("增加成功\n");
		}
		else
		{
			perror("增加失败");
			return;
		}
	}
		
	printf("请输入地址\n");
	scanf("%s", p->data[p->sz].addr);
	printf("请输入姓名\n");
	scanf("%s", p->data[p->sz].name);
	printf("请输入电话号码\n");
	scanf("%s", p->data[p->sz].number);
	printf("请输入年龄\n");
	scanf("%d", &p->data[p->sz].age);
	printf("添加成功\n");
	p->sz++;
}

void print(CONTACT* p)
{
	int i = 0;
	printf("%-20s\t%-5s\t%-10s\t%-20s\n","姓名","年龄","电话","地址");
	for (i = 0; i < p->sz; i++)
	{
		printf("%-20s\t%-5d\t%-10s\t%-20s", 
			p->data[i].name,
			p->data[i].age,
			p->data[i].number,
			p->data[i].addr);
		printf("\n");
	}
}

int findby_name(CONTACT* p,char name[])
{
	int i = 0;
	for (i = 0; i <p->sz; i++)
	{
		if (strcmp(name, p->data[i].name)==0)
		{
			return i;
		}
	}
	return -1;
}

void del_contact(CONTACT *p)
{
	if (p->sz == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	char name[NUM] = {0};
	printf("请输入要删除的人的姓名\n");
	scanf("%s", name);
	int pos = findby_name(p,name);
	
	if (pos == -1)
	{
		printf("要删除的人不存在\n");
		return;
	}
	int i = 0;
		for (i=pos; i < p->sz-1; i++)
		{
			p->data[i] = p->data[i+1];
		}
		p->sz--;
		printf("删除成功\n");
}

void search(CONTACT* p)
{
	if (p->sz == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	char name[NUM] = {0};
	printf("请输入要查找的人的姓名\n");
	scanf("%s", name);
	int pos=findby_name(p,name);
	if (pos == -1)
	{
		printf("查无此人\n");
		return;
	}
	printf("%-20s\t%-5s\t%-10s\t%-20s\n", "姓名", "年龄", "电话", "地址");
	printf("%-20s\t%-5d\t%-10s\t%-20s",
		p->data[pos].name,
		p->data[pos].age,
		p->data[pos].number,
		p->data[pos].addr);
	printf("\n");
}

void mod_contact(CONTACT* p)
{
	if (p->sz == 0)
	{
		printf("通讯录为空\n");
		return;
	}
	char name[NUM] = {0};
	printf("请输入要修改的人的姓名\n");
	scanf("%s", name);
	int pos=findby_name(p,name);
	if (pos == -1)
	{
		printf("查无此人\n");
		return;
	}
	else
	{
		printf("请输入姓名\n");
		scanf("%s", p->data[pos].name);
		printf("请输入地址\n");
		scanf("%s", p->data[pos].addr);
		printf("请输入年龄\n");
		scanf("%d", &p->data[pos].age);
		printf("请输入电话号码\n");
		scanf("%s", p->data[pos].number);
		printf("修改成功\n");
	}
}

void sortby_name(CONTACT* p)
{
	int i = 0;
	for (i = 0; i < (p->sz-1); i++)
	{
		int j = 0;
		for (j = 0; j < (p->sz - 1 - i); j++)
		{
			if ((p->data[j].age- p->data[j + 1].age) > 0)
			{
				infma tmp = p->data[j];
				p->data[j] = p->data[j + 1];
				p->data[j + 1] = tmp;
			}
		}
	}
}