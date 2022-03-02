#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
bool isPowerOfTwo(int n) {
    if (n == 0)
    {
        return 0;
    }
    int x = (int)log2(n) + 1e-8;
    if (fabs(pow(2, x) - n) < 1e-8)
        return 1;
    else
        return 0;
}
//int sumNums(int n)
//{
//	int ret = 0;
//	return n && 
//
//}
int main()
{

	return 0;
}