#include"contact.h"
int main()
{
	int input = 0;
	Contact addrBook;
	Init(&addrBook);
	do
	{
		menu();
		printf("������\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			Destroy(&addrBook);
			printf("�˳�\n");
			break;
		case 1:
			Add(&addrBook);
			break;
		case 2:
			Del(&addrBook);
			break;
		case 3:
			Search(&addrBook);
			break;
		case 4:
			Modify(&addrBook);
			break;
		case 5:
			show(&addrBook);
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}