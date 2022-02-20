#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<errno.h>

int main()
{
	char arr[100];
	FILE* pf = fopen("test.txt", "r");
	fscanf(pf, "%s", arr);
	fscanf(pf, "%s", arr);
	return 0;
}

//struct A
//{
//	char name[10];
//	int age;
//	int grade;
//};

//int main()
//{
//	struct A a = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	fscanf(pf, "%s %d %d", a.name, &(a.age), &(a.grade));
//	printf("%s %d %d", a.name, a.age, a.grade);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//
//}
//int main()
//{
//	struct A a = { "songxin", 19, 100 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	fprintf(pf, "%s %d %d", a.name, a.age, a.grade);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	char arr[100];
//	fgets(arr,100, pf);
//
//	return 0;
//}

//int main()
//{
//	char arr[100];
//	gets(arr);
//	printf(arr);
//	return 0;
//}
//int main()
//{
//	FILE* pr = fopen("test.txt", "r");
//	if (pr == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	FILE* pw = fopen("test1.txt", "w");
//	if (pw == NULL)
//	{
//		printf("%s", strerror(errno));
//		fclose(pr);
//		pr = NULL;
//		return 0;
//	}
//	char arr[100];
//	while ((fgets(arr, 100, pr)) != NULL)
//	{
//		fputs(arr, pw);
//	}
//	fclose(pr);
//	pr = NULL;
//	fclose(pw);
//	pw = NULL;
//	return 0;
//	//int ch = 0;
//	//while ((ch = fgetc(pr)) != EOF)
//	//{
//	//	char c = ch;
//	//	fputc(ch, pw);
//	//}
//	//fclose(pr);
//	//pr = NULL;
//	//fclose(pw);
//	//pw = NULL;
//	//return 0;
//}
//int main()
//{
//	char ch = 'a';
//	/*for(int i = 0; i < 10; i++)
//	{*/
//		ch = fgetc(stdin);
//		printf("%c", ch);
//	
//	return 0;
//}
//int main()
//{
//	/*FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s", strerror(errno));
//		return 0;
//	}*/
//	/*fputs("hello world\n", pf);
//	fputs("hehe\n", pf);*/
//	/*fclose(pf);*/
//	FILE* pf = fopen("test.txt", "r");
//	char arr[100] = { 0 };
//	fgets(arr, 100, pf);
//	printf("%s", arr);
//	return 0;
//}