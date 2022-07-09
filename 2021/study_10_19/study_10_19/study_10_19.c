#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	printf("今天也是学习的一天！");
	return 0;
}
//struct book		//创建一个结构体类型
//{
//	int price;
//	char name[20];
//	int number;
//};
//int main()
//{
//	struct book C = { 22,"C语言",002233 };//定义一个结构体变量 
//	struct book* pc = &C;
//	printf("直接通过变量访问成员：\n");
//	printf(" price=%d\n", C.price);//通过.操作符访问变量成员
//	printf(" name=%s\n", C.name);
//	printf(" number=%d\n", C.number);
//	printf("通过结构体变量的指针访问成员：\n");
//	printf(" price=%d\n", pc->price);//通过->操作符访问变量成员
//	printf(" name=%s\n", pc->name);
//	printf(" number=%d\n", pc->number);
//	return 0;
//}
//int main()
//{
//	int a = (1 && 0);
//	int b = (1 || 0);
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 3; //赋值
//	int b = 5;
//	int c = a & b;//将3和5按位与的结构赋值给c
//	printf(" c=%d", c);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	a += 1;
//	printf("a+=1后a=%d\n", a);
//	a += 1;
//	printf("a+=1后a=%d\n", a);
//	return 0;
//}
//int main()
//{
//	char a = 1 << 1;
//	printf(" %d", a);
//	return 0;
//}
//int main()
//{
//	int i= 0;
//	int arr[5] = { 4,6,8,10,12 };
//	for (i = 0; i < 5;i++)
//	{
//		printf("a[%d]= %d\n",i, arr[i]);
//	}
//	return 0;
//}
//int ADD(int a, int b)
//{
//	return a + b;
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入x，y\n");
//	scanf("%d %d", &x, &y);
//	int sum = ADD(x, y);
//	printf("x+y=%d\n", sum);
//	return 0;
//}
//int main()
//{
//	printf("开始学习！\n");
//	int study_time = 0;//学习天数
//	while (study_time < 5000)
//	{
//		study_time++;//重复学习
//	}
//	if(study_time>=5000)
//	printf("已经闭关5000天，好offer");
//	return 0;
//}
//enum select	//枚举关键
//{
//	Play_game,//枚举出可能的情况
//	Study_hard,
//};
//int main()
//{
//	int My_Choice = 0;
//	printf("你会努力学习编程吗?请选择->(1.Study_hard or 0.Play_game)\n");
//	printf("请输入");
//	scanf("%d", &My_Choice);
//	if (My_Choice)  //选择语句
//		printf("成为大牛，走向人生巅峰！");
//	else  //选择语句
//		printf("碌碌无为，老实种地！");
//	return 0;
//}