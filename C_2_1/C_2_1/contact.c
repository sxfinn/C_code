#include"contact.h"

void menu()
{
	printf("***************************\n");
	printf("*******1.add     2.del ****\n");
	printf("*******3.search  4.modify *\n");
	printf("*******5.show    6.exit****\n");
	printf("***************************\n");
}
void Init(Contact* addrBook)
{
	Information* tmp = (Information*)malloc(sizeof(Information) * DEFAULT_SZ);
	if (tmp != NULL)
	{
		addrBook->data = tmp;
	}
	else
	{
		printf("%s\n", strerror(errno));
		return;
	}
	addrBook->capacity = DEFAULT_SZ;
	addrBook->sz = 0;
}

void show(Contact* addrBook)
{
	printf("%-15s\t", "����");
	printf("%-15s\t", "�绰");
	printf("%-15s\t", "����");
	printf("%-15s\t", "��ַ");
	printf("\n");
	for (int i = 0; i < addrBook->sz; i++)
	{
		printf("%-15s\t", addrBook->data[i].name);
		printf("%-15s\t", addrBook->data[i].number);
		printf("%-15d\t", addrBook->data[i].age);
		printf("%-15s\t", addrBook->data[i].address);
		printf("\n");
	}
}

void Add(Contact* addrBook)
{
	if (addrBook->sz == addrBook->capacity)
	{
		Information* tmp = (Information*)realloc(addrBook->data, (addrBook->capacity + 2) * sizeof(Information));
		if (tmp != NULL)
		{
			addrBook->data = tmp;
		}
		else
		{
			printf("%s\n", strerror(errno));
			return;
		}
		addrBook->capacity += 2;
		printf("���ݳɹ�\n");
	}
	printf("����������\n");
	scanf("%s", addrBook->data[addrBook->sz].name);
	printf("������绰\n");
	scanf("%s", addrBook->data[addrBook->sz].number);
	printf("����������\n");
	scanf("%d", &addrBook->data[addrBook->sz].age);
	printf("�������ַ\n");
	scanf("%s", addrBook->data[addrBook->sz].address);
	addrBook->sz++;
	printf("�����ϵ�˳ɹ�\n");
}

int Find(Contact* addrBook,char name[MAXNAME])
{
	for (int i = 0; i < addrBook->sz; i++)
	{
		if (strcmp(addrBook->data[i].name, name) == 0)
			return i;
	}
	return -1;
}

void Del(Contact* addrBook)
{
	if (addrBook->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	char name[MAXNAME] = { 0 };
	printf("������Ҫɾ�����˵�����\n");
	scanf("%s", name);
	int pos = Find(addrBook, name);
	if (pos == -1)
	{
		printf("���޴���\n");
		return;
	}
	for (int i = pos; i < addrBook->sz - 1; i++)
	{
		addrBook->data[i] = addrBook->data[i + 1];
	}
	addrBook->sz--;
	printf("ɾ���ɹ�\n");
}

void Search(Contact* addrBook)
{
	if (addrBook->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	char name[MAXNAME] = { 0 };
	printf("������Ҫ���ҵ��˵�����\n");
	scanf("%s", name);
	int pos = Find(addrBook, name);
	if (pos == -1)
	{
		printf("���޴���\n");
		return;
	}
	printf("%-15s\t", "����");
	printf("%-15s\t", "�绰");
	printf("%-15s\t", "����");
	printf("%-15s\t", "��ַ");
	printf("\n");
	printf("%-15s\t", addrBook->data[pos].name);
	printf("%-15s\t", addrBook->data[pos].number);
	printf("%-15d\t", addrBook->data[pos].age);
	printf("%-15s\t", addrBook->data[pos].address);
	printf("\n");
}

void Modify(Contact* addrBook)
{
	if (addrBook->sz == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
		return;
	}
	char name[MAXNAME] = { 0 };
	printf("������Ҫ�޸ĵ��˵�����\n");
	scanf("%s", name);
	int pos = Find(addrBook, name);
	if (pos == -1)
	{
		printf("���޴���\n");
		return;
	}
	printf("����������\n");
	scanf("%s", addrBook->data[pos].name);
	printf("������绰\n");
	scanf("%s", addrBook->data[pos].number);
	printf("����������\n");
	scanf("%d", &addrBook->data[pos].age);
	printf("�������ַ\n");
	scanf("%s", addrBook->data[pos].address);
	printf("�޸ĳɹ�\n");
}

void Destroy(Contact* addrBook)
{
	free(addrBook->data);
	addrBook->data = NULL;
	addrBook->capacity = 0;
	addrBook->sz = 0;
}