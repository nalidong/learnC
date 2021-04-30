/* 字符串输出可以使用printf 和 puts 进行输出
 * 字符串输入可以使用 scanf 和 gets 进行输入

	- 使用printf的%s占位符输出
		- 弊端：如果想要换行，必须加上\n
		- 优点：可以自定义格式化需要的字符串，也就是可以按照我们需要的格式来输出
	- 使用puts函数进行输出
		- 优点：可以自动换行
		- 缺点：不可以自定义格式，只能原样输出
 */

#include <stdio.h>

int main()
{
	// printf
	char str[] = "lisi";
	printf("name = %s!!!\n", str);
	printf("-----\n");

	// puts
	// 自动换行，只能原样输出
	puts(str);
	printf("----\n");

}
