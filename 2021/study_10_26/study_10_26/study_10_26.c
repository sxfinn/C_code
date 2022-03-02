#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9|| i / 10 == 9)
		{
			count++;
		}		
	}
	printf("%d", count);
	return 0;
}
	//int main()  //  测试
//{
//	while (1)
//	{
//		int i = 1;
//	}	
//	return 0;
//}
//int main()  // 求阶乘
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int sum = 0;
//	int j = 0;
//	for (j = 1; j <= n; j++)
//	{
//		int i = 0;
//		ret = 1;
//		for (i = 1; i <= j; i++)
//		{			
//			ret *= i;
//		}
//		sum += ret;
//	}	
//	printf("%d", sum);
//	return 0;
//}
//int main()
//{
//	char arr[] = { '*','*','*','*','*'};//检验以%s形式输入时，是否会默认最后加上‘\0’
//	scanf("%s", arr);
//	printf("%s", arr);
//	return 0;
//}
//int main()
//{
//
//	/*char arr[10] = { 0 };
//	scanf("%s", arr);
//	printf("jj");
//	char a = getchar();
//	printf("%s\n", arr);
//	printf("%c", a);*/
//
//
//	return 0;
//}