#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<string.h>
void paixu(int arr[], int sz)
{
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        int j = 0;
        for (j = 0; j < sz - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    
}
int main()
{
    int a[] = { 8,3,4,5,3,2 };
    int sz = sizeof(a) / sizeof(a[0]);
    paixu(a,sz);
    
    return 0;
}