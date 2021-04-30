//字符串的本质是数组，比数组多"\0"

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    char name[] = "zhangsan";
    
    // %u 表示无符号，sizeof 返回的是一个无符号长整型
    printf("name --> %s  size --> %lu\n", name, sizeof(name));      // name --> zhangsan  size --> 9
    
    // 字符串本质就是一个字符数组，前提是末尾以\0结尾
    char name1[] = {'z', 'h', 'a', 'n', 'g', 's', 'a', 'n', '\0'};
    printf("name1 --> %s\n", name1);    // name1 --> zhangsan
    
    // 部分初始化中，没有被初始化的元素默认是0, \0 对应的ASCII值是 0
    char name2[9] = {'z', 'h', 'a', 'n', 'g', 's', 'a', 'n'};
    printf("name2 --> %s\n", name2);    // name2 --> zhangsan
    
    // 没有"\0"结尾，输出结果未知
    char name4[8] = {'z', 'h', 'a', 'n', 'g', 's', 'a', 'n'};
    printf("name4 --> %s\n", name4);    // name4 -->

    // 字符串的本质就是数组
    char name3[] = "lisi";
    printf("name3 --> %s \n", name3);   // name3 --> lisi
    name3[0] = 'x';
    printf("name3 --> %s \n", name3);   // name3 --> xisi
    

    return 0;
}
