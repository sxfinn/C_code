
#include"heap.h"

//void test1()
//{
//	Heap h;
//	HeapInit(&h);
//	HeapPush(&h, 8);
//	HeapPush(&h, 3);
//	HeapPush(&h, 0);
//	HeapPush(&h, 9);
//	int ret = 0;
//	ret = HeapPop(&h);
//	printf("%d ", ret);
//	ret = HeapPop(&h);
//	printf("%d ", ret);
//	ret = HeapPop(&h);
//	printf("%d ", ret);
//	HeapPrint(&h);
//}
void test2()
{
	Heap h;
	HeapInit(&h);
	int arr[] = { 2,6,9,1,4,6,8,1,76,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		HeapPush(&h, arr[i]);
	}
	for (int i = 0; i < sz; i++)
	{
		arr[i] = HeapPop(&h);
	}
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	//size_t a1= -1;
	//int a2 = a1;
	//printf("%d", a2);
	//test1();
	test2();
	return 0;
}









//int main()
//{
//    char arr[101];
//    memset(arr, '\0', sizeof(arr));
//    int i = 0;
//    char* s = "|/-\\";
//    while (i < 100)
//    {
//        arr[i++] = '#';
//        printf("%-100s[%d%%][%c]\r", arr, i,*(s + (i % 4)));
//        fflush(stdout);
//        Sleep(1);
//    }
//    //printf("%-10s%d", "helloc",4);
//	return 0;
//}
//int main()
//{
//    int i = 0;
//    while (i < 100)
//    {
//        printf("#");
//        Sleep(1000);
//        ++i;
//    }
//    return 0;
//}

//int main()
//{
//	printf("%zu", sizeof("hello"));
//	char* s = "hello";
//	printf("%zu", sizeof(s));
//	return 0;
//}