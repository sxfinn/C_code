#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void reverse(char* s)
{
	int sz = strlen(s);
	char* right = s + sz - 1;
	while (s < right)
	{
		char tmp = *s;
		*s = *right;
		*right = tmp;
		s++;
		right--;
	}
}
char* addStrings(char* a, char* b) {
	char* c;
	int lena = strlen(a);
	int lenb = strlen(b);
	int i, cap, now;
	int av, bv;
	int maxlen = lena > lenb ?  lena : lenb;
	reverse(a);                           // (1)
	reverse(b);                           // (2)
	c = (char*)malloc(sizeof(char) * (maxlen + 2));
	cap = 0;
	for (i = 0; i < maxlen; ++i) {
		av = (i < lena) ? (a[i] - '0') : 0; // (3)
		bv = (i < lenb) ? (b[i] - '0') : 0; // (4)
		now = (av + bv + cap);            // (5)
		cap = now / 10;                   // (6)
		c[i] = (now % 10) + '0';          // (7)
	}
	if (cap) {
		c[i] = '1';                       // (8)
		maxlen++;
	}
	c[maxlen] = '\0';
	reverse(c);                           // (9)
	return c;
}

//char* addStrings(char* num1, char* num2) 
//{
//	int sz1 = strlen(num1);
//	int sz2 = strlen(num2);
//	int len = sz1 > sz2 ? sz1 : sz2;
//	char* ret = (char*)malloc(sizeof(len + 2));
//	reverse(num1);
//	reverse(num2);
//	int n1 = 0, n2 = 0;
//	int now = 0, base = 0;
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		n1 = i < sz1 ? num1[i] - '0' : 0;
//		n2 = i < sz2 ? num2[i] - '0' : 0;
//		now = n1 + n2 + base;
//		base = now / 10;
//		ret[i] = now % 10 + '0';
//	}
//	if (base)
// {
//		ret[i] = base + '0';
//		len++;
// }
//	ret[len] = '\0';
//	reverse(ret);
//	while (*ret == '0' && strlen(ret) > 1)
//		ret++;
//	return ret;
//}

int main()
{
	char arr1[] = "999";
	char arr2[] = "999";
	char* ret = addStrings(arr1,arr2);
	printf("%s", ret);
	return 0;
}
//const int values[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 };
//const char* symbols[] = { "M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" };
//char* intToRoman(int num) 
//{
//	char* ret = (char*)malloc(sizeof(char) * 16);
//	memset(ret, 0, 16);
//	int i = 0;
//	for (i = 0; i < 13; i++)
//	{
//		while (num >= values[i])
//		{
//			num -= values[i];
//			strcpy(ret + strlen(ret), symbols[i]);
//		}
//		if (!num)
//			break;
//	}
//	return ret;
//}
