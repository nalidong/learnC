#include <stdio.h>
#include <assert.h>
#include <string.h>

char* mystrcat(char *dest, const char *src)
{
	assert(dest != NULL && src != NULL);//
	
	char *address = dest;
	
	while(*dest != '\0')
		dest++;

	while((*dest++ = *src++) != '\0');
	
	return address;//为了实现链式操作，将目的地址返回
}

char* mystrncat(char *dest, const char *src, size_t size)
{
	assert(dest != NULL && src != NULL);//
	
	char *address = dest;
	
	while(*dest != '\0')
		dest++;

	while(size--)
		*dest++ = *src++;
	
	return address;//为了实现链式操作，将目的地址返回
}

int main()
{
	char a[14] = "abcdefg";//注意分配空间足够大
	char b[] = "hijklmn";

	//mystrcat(a,b);
	//char *c = strcat(a,b);
	char *c = mystrncat(a,b,2);
	printf("%s\n",c);
}
