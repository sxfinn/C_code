#include"tree.h"
#include"queue.h"
void test2()
{
	char arr[] = "ABD##E#H##CF##G##";
	int i = 0;
	BTNode* root = BinaryTreeCreate(arr, (int)strlen(arr), &i);
	//BinaryTreeLevelOrder(root);
	bool ret = BinaryTreeComplete(root);
	if (ret)
		printf("yes\n");
	else
		printf("no\n");
}
	
int main()
{
	test2();
	//test1();
	//test();
	return 0;
}
//void test1()
//{
//	Queue q;
//	QueueInit(&q);
//	QueuePush(&q, 1);
//	QueuePush(&q, 2);
//	int ret = 0;
//	ret = QueuePop(&q);
//	printf("%d ", ret);
//	ret = QueuePop(&q);
//	printf("%d ", ret);
//	QueueDestory(&q);
//}
//void test()
//{
//	char arr[] = "ABD##E#H##CF##G##";
//	int i = 0;
//	BTNode* root = BinaryTreeCreate(arr, (int)strlen(arr), &i);
//	int sz = 0;
//	sz = BinaryTreeLevelKSize(root,6);
//	sz = BinaryTreeLeafSize(root);
//	//BinaryTreeInOrder(root);
//	//int sz = BinaryTreeSize(root);
//	printf("%d ", sz);
//	BTNode* ret = NULL;
//	//ret = BinaryTreeFind(root, 'I');
//	//printf("%p ", ret);
//	//ret = BinaryTreeFind(root, 'Z');
//	//printf("%p", ret);
//	BinaryTreeDestory(&root);
//	printf("%p", root);
//}