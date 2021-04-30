/*
 *  assert"断言"的理解及使用：

a. 断言，也即做出一些假设，假设该表达式是正确的，若程序运行正确，该断言程序成立；若断言的表达式不成立，程序运行一定会出错，整个程序就会退出。多用于Debug调试，且能快速定位错误位置；

assert(表达式);

如果表达式的值为假，整个程序将退出，并输出一条错误信息。如果表达式的值为真则继续执行后面的语句。


b. assert是宏，而不是函数，使用这个宏需要添加头文件 #include <assert.h>


c. assert 与 if的区别：

if : 条件成立继续执行、条件不成立也继续执行。

assert：条件成立继续执行、 条件不成立停止执行 。
 */

#include <stdio.h>
#include <string.h>
#include <assert.h>

char *mystrcpy(char *dest, const char *src);
char *mystrncpy(char *dest, const char *src,int size);


int main()
{
	char src[20] = "zhangsan";
	char dest[20];

	//mystrcpy(dest, src);
	mystrncpy(dest, src,3);

	printf("%s\n", dest);
}

char *mystrcpy(char *dest, const char *src)//1、注意const修饰
{
    if(dest == src)     //2、考虑到源字符串和目的字符串有重叠，也即地址相同  
    {   
        return dest;   
    } 
	
	assert((dest != NULL) && (src != NULL));//3、断言判断，NULL最好不要写成0
	char *address = dest;	//4备份目的字符串的首地址，由于后面的操作会修改dest值
	while((*dest++ = *src++) != '\0');
	return address;//5实现链式操作，返回目的地址，链式操作也就是Strcpy函数可以作为另外一个函数的实参

}

char *mystrncpy(char *dest, const char *src, int size)//1、注意const修饰
{
    if(dest == src)     //2、考虑到源字符串和目的字符串有重叠，也即地址相同  
    {   
        return dest;   
    }
	int offset = 0;
	int len = strlen(src);
	if(len > size)//判断size和len大小
		offset = len - size;

	assert((dest != NULL) && (src != NULL));//3、断言判断，NULL最好不要写成0
	char *address = dest;	//4备份目的字符串的首地址，由于后面的操作会修改dest值
	while(size--)
		*dest++ = *src++;
	while(offset--)
		*dest = '\0';
	return address;//5实现链式操作，返回目的地址，链式操作也就是Strcpy函数可以作为另外一个函数的实参

}

