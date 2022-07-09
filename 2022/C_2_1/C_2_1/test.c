#include"contact.h"
int main()
{
	int input = 0;
	Contact addrBook;
	Init(&addrBook);
	reload(&addrBook);
	do
	{
		menu();
		printf("请输入\n");
		scanf("%d", &input);
		switch (input)
		{
		case 0:
			Save(&addrBook);
			Destroy(&addrBook);
			printf("退出\n");
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
		case 6:
			sort(&addrBook);
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}