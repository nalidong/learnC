/*    输入字符串
        使用scanf的%s占位符接收键盘输入的字符串
            scanf 接收字符串，会以空格，tab，回车作为结束符号，利用scanf接收字符串时，字符串不能出现空格，tab，回车
        使用gets接收字符串
*/

#include <stdio.h>

int main()
{
	// scanf
	//printf("请输入一个字符串：\n");
	//char buf[10];
	//scanf("%s", buf);   // 输入：fdsa fdas
	//printf("buf --> %s\n", buf);    // buf --> fdsa
	
	
	// gets
	char buf1[10];
	printf("请输入一个字符串，使用gets接收：\n");
	gets(buf1);
	printf("buf1 --> %s\n", buf1);    // buf1 --> fdsaf fdsa

}
