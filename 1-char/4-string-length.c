//计算字符串长度

#include <stdio.h>
#include <string.h>

// 申明函数
int stringLen(char value[]);
int stringLen1(char value[]);


int main(int argc, const char * argv[]) {
    
    char string[] = "zhangsan";
    
    // 计算字符串的长度，不包括末尾\0的长度
    
    // 调用系统内置函数strlen 计算字符串的长度，需要先导入 string.h 头文件
    size_t length = strlen(string);     // lenght --> 8
    printf("lenght --> %lu\n", length);
    
    
    // 自定义计算字符串长度的函数
    int length2 = stringLen1(string);
    printf("length2 --> %i\n", length2);    // length2 --> 8
    return 0;
}

// 自定义计算字符串长度的函数
int stringLen(char value[]) {
    int count = 0;
    while (value[count] != '\0') {
        count ++;
    }
    return count;
}

int stringLen1(char val[])
{
	int count = 0;
	while(val[++count] != '\0'){}
	return count;
}
