#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


//void swap(int* a, int* b)
//{
//    int tmp = *a;
//    *a = *b;
//    *b = tmp;
//}
//void triangleNumber(int* nums, int numsSize)
//{
//    int i = 0;
//    int j = 0;
//    int minid = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        minid = i;
//        for (j = i; j < numsSize; j++)
//        {
//            if (nums[j] < nums[minid])
//                minid = j;
//        }
//        swap(nums + i, nums + minid);
//    }
//}
//int main()
//{
//    int arr[] = { 3,4,2,2};
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    triangleNumber(arr, sz);
//    for (int i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//34,45,2,46,57,2,19,0,25,14,6
//int checkData(int* p)
//{
//	char tmp = 0;
//
//	int i;
//	for (i = 0; i < 5; i++)
//	{
//		tmp |= 1 << p[i];
//		//tmp每次或上一位1，p[i]如果是1~5都有，
//		/*则1<<1到1<<5都或上的结果将会是00111110，如果有并列，
//			则一定会至少却其中一个1，结果就不会是00111110，
//			所以可以判断tmp最终的结果是不是这个数字来判断有没有重复。*/
//	}
//	return tmp == 0x3E;
//}
//void diveRank(int* p, int n)
//{
//	if (n >= 5) //此时的n是用来控制循环层数的。
//	{
//		if ((p[1] == 2) + (p[0] == 3) == 1 && //B第二，我第三
//			(p[1] == 2) + (p[4] == 4) == 1 && //我第二，E第四
//			(p[2] == 1) + (p[3] == 2) == 1 && //我第一，D第二
//			(p[2] == 5) + (p[3] == 3) == 1 && //C最后，我第三
//			(p[4] == 4) + (p[0] == 1) == 1 && //我第四，A第一
//			checkData(p)) //查重
//		{
//			for (int i = 0; i < 5; i++)
//			{
//				printf("%d ", p[i]);
//			}
//			putchar('\n');
//		}
//		return;
//	}
//
//	for (p[n] = 1; p[n] <= 5; p[n]++)
//	{
//		diveRank(p, n + 1); //通过递归模拟多层循环，每进一次递归相当于进了一层新的循环。
//	}
//}
//int main()
//{
//	int p[5];
//
//	diveRank(p, 0);
//
//	return 0;
//}
//#include <stdio.h>
//
//void swapArgs(int* a, int* b) //交换函数
//{
//	int tmp;
//
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//}
//
//void diveRank(int* p, int n)
//{
//	if (n >= 5) //此时的n也是用来控制循环层数的。
//	{
//		if ((p[1] == 2) + (p[0] == 3) == 1 && //B第二，我第三
//			(p[1] == 2) + (p[4] == 4) == 1 && //我第二，E第四
//			(p[2] == 1) + (p[3] == 2) == 1 && //我第一，D第二
//			(p[2] == 5) + (p[3] == 3) == 1 && //C最后，我第三
//			(p[4] == 4) + (p[0] == 1) == 1)   //我第四，A第一
//			//由于此时是执行的全排列，所以查重也省了。
//		{
//			for (int i = 0; i < 5; i++)
//			{
//				printf("%d ", p[i]);
//			}
//			putchar('\n');
//		}
//		return;
//	}
//
//	int i;
//	for (i = n; i < 5; i++) //这个递归方式就完成了对1~5的全排列，方法是从后向前不停的执行交换。
//		//可以参考改进二和原代码，将这个递归程序写回成循环后，可以更好的理解。
//	{
//		swapArgs(p + i, p + n);
//		diveRank(p, n + 1);
//		swapArgs(p + i, p + n);
//	}
//}
//
//int main()
//{
//	int p[5] = { 1, 2, 3, 4, 5 }; //当然由于是全排列，所以初值必须给好。
//
//	diveRank(p, 0);
//
//	return 0;
//}


//int is_leap_year(int n)
//{
//	if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int day = 0;
//	int arr[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	int year = 0, month = 0;
//	while (scanf("%d %d", &year, &month) != EOF)
//	{
//		if (is_leap_year(year) && month == 2)
//		{
//			day = 29;
//		}
//		else
//		{
//			day = arr[month];
//		}
//		printf("%d\n", day);
//	}
//	return 0;
//}
//int main()
//{
//	double a = 0, b = 0, c = 0;
//	double ans1 = 0, ans2 = 0;
//	double imaginary = 0;
//	double real = 0;
//	while (scanf("%lf %lf %lf", &a, &b, &c) != EOF)
//	{
//		if (a == 0)
//		{
//			printf("Not quadratic equation");
//			return 0;
//		}
//		double delt = b * b - 4 * a * c;
//		if (delt > 0)
//		{
//			ans1 = (-b + sqrt(delt)) / 2 / a;
//			ans2 = (-b - sqrt(delt)) / 2 / a;
//			printf("x1=%.2lf;x2=%.2lf", ans1, ans2);
//		}
//		else if (delt == 0)
//		{
//			ans1 = (-b + sqrt(delt)) / 2 / a;
//			printf("x1=x2=%.2lf", ans1);
//		}
//		else
//		{
//			real = -b / 2 / a;
//			imaginary = sqrt(delt);
//			printf("x1=%.2lf+%.2lf;x2=%.2lf-%.2lf", real, imaginary, real, imaginary);
//		}
//	}
//	return 0;
//}
//不用加法的加法
//int getSum(int a, int b)
//{
//    while (b)
//    {
//        int carry = (unsigned int)(a & b) << 1;
//        a = (a ^ b);
//        b = carry;
//    }
//    return a;
//}
