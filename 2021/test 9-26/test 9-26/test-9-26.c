#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<stdlib.h>
int main()
{
	int a = 99;
	int tmp = 0;
	FILE* pf = fopen("data.txt", "w");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	fwrite(&a, sizeof(a), 1, pf);
	
	fclose(pf);
	pf = NULL;
	FILE* pd = fopen("data.txt", "r");
	fread(&tmp, sizeof(int), 1, pd);
	printf("%d", tmp);
	fclose(pd);
	pd = NULL;
	
	return 0;
}
//struct S
//{
//	char a[10];
//	int b;
//	double c;
//};
//int main()
//{
//	struct S s = { 0 };
//	char arr[100] =  "hhh.. 101 102 104";
//	sscanf(arr, "%s %d %lf ",s.a ,&(s.b),&(s.c));
//	printf("%s\n %d\n %lf", s.a, s.b, s.c);
//	return 0;
//}
//typedef struct S
//{
//	char a;
//	int b;
//	double c;
//}S;
//int main()
//{
//	S s = {0};
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//fscanf(pf, "%d %c %lf", &s.b, &s.a, &(s.c));
//	fclose(pf);
//	printf( "%d %c %lf", s.b, s.a, s.c);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	char arr[10] = { 0 };
//	FILE* pf = fopen("data.txt", "r");
//	if (pf == NULL)
//	{
//		perror("fopen");
//		return 1;
//	}
//	fgets(arr, 4, pf);
//	printf("%s", arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//int main()
//{
//	int a[50] = { 0 };
//	int n = 0;
//	int i = 0;
//	int k = 0;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	
//	scanf("%d", &k);
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		if (a[i] > k)
//		{
//			for (j = n; j > i; j--)
//			{
//				a[j] = a[j - 1];
//			}
//			a[i] = k;
//			break;
//		}
//		/*if (i == n-1)
//		{
//			a[i + 1] = k;
//		}		*/
//	}
//	if (i == n )
//	{
//		a[i] = k;
//	}
//	for (i = 0; i < n + 1; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int maxid = 0;
//	int minid = 0;
//	int a[7] = {0};
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 7; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	//找出最大数
//	for (i = 0 ; i < 7; i++ )
//	{		
//		if (a[i] > a[maxid])
//		{
//			maxid = i;
//		}
//	}
//	
//	//找出最小数
//	for (i = 0; i < 7; i++)
//	{
//		if (a[i] < a[minid])
//			minid = i;
//	}
//	a[minid] = 0;
//	a[maxid] = 0;
//	for (i = 0; i < 7; i++)
//	{
//		sum += a[i];
//	}
//	printf("%.2f", sum /5.0);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	
//	while (scanf("%d", &n)!=EOF)
//	{
//		int i = 0;
//		for (i = 0; i < n; i++)
//		{
//			int j = 0;
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if (i + j == n-1)
//				{
//					printf("*");
//				}
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char a[10][10] = {0};
//	int x = 5;
//	
//	int y = 0;
//	int i = 0;
//	int j = 4;
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			a[i][j] = '  ';
//		}
//	}
//	i = 0;
//	j = 4;
//	for (y = 0; y < 5&&i<5&&j>=0; y++)
//	{
//		a[y][i] = '*';
//		a[y][j] = '*';
//		i++;
//		j--;
//	}
//	/*for (i = 0, j = 4; i < 5 && j >= 0&&y<5; i++, j--)
//	{
//		a[y][i] = '*';
//		a[y][j] = '*';
//		y++;
//	}
//	*/
//	for (i = 0; i < 5; i++)
//	{
//		for (j = 0; j < 5; j++)
//		{
//			printf("%c", a[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int* p = malloc(40);
//	if (p == NULL)
//	{
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = 1;
//	}
//	int* p1 = realloc(p, 20);
//	if (p1 != NULL)
//	{
//		p = p1;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", p[i]);
//	}
//	return 0;
//}