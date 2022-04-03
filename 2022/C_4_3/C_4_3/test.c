#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>




//#define MAX 10
////#undef MAX
//int a = MAX;


//#define ADD(x) x
//#define SUM(n) (n > 0 ? (n + SUM(n - 1)) : 0);
//int main()
//{
//	SUM(0)
//	return 0;
//}
//
//int main()
//{
//	printf("%d", SUM(2));
//	return 0;
//}

//#define dd printf("dd")
//
//
//int i = 10;
//#define PRINT(FORMAT, VALUE)\
//printf("the value of " #VALUE "is "FORMAT "\n", VALUE);
//int main()
//{
//	
//	PRINT("%d", i + 3);//产生了什么效果
//}


//int main()
//{
//	int a = 10;
//	char* pa = "sx";
//	*pa = 1;
//	printf(pa);
//	return 0;
//}
//int main()
//{
//	char arr[10] = "zazaza";
//	FILE* pf = fopen("test.txt", "wb");
//	fseek(pf, 2, SEEK_SET);
//	fwrite(arr, sizeof(char), 10, pf);
//	return 0;
//}

//VS2013 WIN10环境测试
//int main()
//{
//	FILE* pf = fopen("test.txt", "w");
//	fputs("abcdef", pf);//先将代码放在输出缓冲区
//	printf("睡眠10秒-已经写数据了，打开test.txt文件，发现文件没有内容\n");
//	Sleep(10000);
//	printf("刷新缓冲区\n");
//	fflush(pf);//刷新缓冲区时，才将输出缓冲区的数据写到文件（磁盘）
//	//注：fflush 在高版本的VS上不能使用了
//	printf("再睡眠10秒-此时，再次打开test.txt文件，文件有内容了\n");
//	Sleep(10000);
//	fclose(pf);
//	//注：fclose在关闭文件的时候，也会刷新缓冲区
//	pf = NULL;
//	return 0;
//}
//enum { SIZE = 5 };
//int main(void)
//{
//	double a[SIZE] = { 1.,2.,3.,4.,5. };
//	FILE* fp = fopen("test.bin", "wb"); // 必须用二进制模式
//	fwrite(a, sizeof * a, SIZE, fp); // 写 double 的数组
//	fclose(fp);
//	double b[SIZE];
//	fp = fopen("test.bin", "rb");
//	size_t ret_code = fread(b, sizeof * b, SIZE, fp); // 读 double 的数组
//	if (ret_code == SIZE) {
//		puts("Array read successfully, contents: ");
//		for (int n = 0; n < SIZE; ++n) printf("%f ", b[n]);
//		putchar('\n');
//	}
//	else { // error handling
//		if (feof(fp))
//			printf("Error reading test.bin: unexpected end of file\n");
//		else if (ferror(fp)) {
//			perror("Error reading test.bin");
//		}
//	}
//	fclose(fp);
//}
//int main(void)
//{
//	int c; // 注意：int，非char，要求处理EOF
//	FILE* fp = fopen("test.txt", "r");
//	if (!fp) 
//	{
//		perror("File opening failed");
//		return EXIT_FAILURE;
//	}
//	//fgetc 当读取失败的时候或者遇到文件结束的时候，都会返回EOF
//	while ((c = fgetc(fp)) != EOF) // 标准C I/O读取文件循环
//	{
//		putchar(c);
//	}//判断是什么原因结束的
//	if (ferror(fp))
//		puts("I/O error when reading");
//	else if (feof(fp))
//		puts("End of file reached successfully");
//	fclose(fp);
//}

//int main()
//{
//	int a = 10000;
//	FILE* pf = fopen("test.txt", "wb");
//	fwrite(&a, 4, 1, pf);//二进制的形式写到文件中
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//int main()
//{
//	FILE* pFile;
//	long size;
//	pFile = fopen("example.txt", "w");
//	if (pFile == NULL) perror("Error opening file");
//	else
//	{
//		//fseek(pFile, 2, SEEK_END); 
//		fputc(98, pFile);
//		size = ftell(pFile);
//		fclose(pFile);
//		printf("Size of myfile.txt: %ld bytes.\n", size);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	char name[10];
//	scanf("%d %s", &a, name);
//	printf("%d %s", a, name);
//	return 0;
//}

//int main()
//{
//	FILE* pFile;
//	pFile = fopen("example.txt", "wb");
//	fseek(pFile, 9, SEEK_SET);
//	fputs("This is an apple.", pFile);
//	fseek(pFile, 9, SEEK_SET);
//	fputs(" sam dododo", pFile);
//	fclose(pFile);
//	return 0;
//}
//int main()
//{
//	int* ret = (int*)malloc(10 * sizeof(int));
//	int*tmp = (int*)realloc(ret, sizeof(int));
//	if (ret)
//	{
//		//
//	}
//	free(ret);
//	ret = NULL;
//	return 0;
//}


//#include <stdio.h>
//struct str {
//	int len;
//	char s[0];
//};
//
//struct foo {
//	struct str* a;
//};
//
//int main(int argc, char** argv) {
//	struct foo f = { 0 };
//	if (f.a->s) {
//		printf(f.a->s);
//	}
//	return 0;
//}