#include"test.h"

void test2()
{
	Queue q;
}

void test1()
{
	Stack s;
	StackInit(&s);
	StackPush(&s, 1);
	StackPush(&s, 2);
	StackPush(&s, 3);
	StackPush(&s, 4);
	StackPush(&s, 5);
}
int main()
{
	test2();
	//test1();
	return 0;
}