#include <stdio.h>
#include <string.h>

int mystrcmp(const char* str1, const char* str2)
{
	while((*str1) && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
/*
    如果返回值小于 0，则表示 str1 小于 str2。
    如果返回值大于 0，则表示 str1 大于 str2。
    如果返回值等于 0，则表示 str1 等于 str2。
*/
	if(*str1 > *str2)
		return 1;
	else if(*str1 < *str2)
		return -1;
	else
		return 0;
	//return *str1 - *str2;返回差值
}

int mystrncmp(const char* str1, const char* str2, int size)
{
	while(size--)
	{
		if(*str1 != *str2)
			return str1 -str2;

		str1++;
		str2++;
	}
/*
    如果返回值小于 0，则表示 str1 小于 str2。
    如果返回值大于 0，则表示 str1 大于 str2。
    如果返回值等于 0，则表示 str1 等于 str2。
*/
	if(*str1 > *str2)
		return 1;
	else if(*str1 < *str2)
		return -1;
	else
		return 0;
	//return *str1 - *str2;返回差值
}

int main()
{
	char a[]="abcdef";
	char b[]="abcdefg";
	//int res = mystrcmp(b,a);
	int res = mystrncmp(b,a,5);
	printf("%d\n",res);
}

