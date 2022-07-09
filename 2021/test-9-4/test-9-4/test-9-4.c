#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
#include<math.h>
void rev(int* a,int sz)
{
	int i = 0;
	
	for (i = 0; i < sz; i++)
	{
		if (a[i] % 2 == 0)
		{
			int j = 0;
			for (j = i; j < sz; j++)
			{
				if (a[j] % 2)
				{
					int tmp = a[j];
					a[j] = a[i];
					a[i] = tmp;
					break;
				}


			}
		}
	}

}
int main()
{
	int arr[] = {1,3,8,5};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	rev(arr,sz);
	for (i = 0; i < sz; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}