/*
链接：https://www.nowcoder.com/questionTerminal/d9162298cb5a437aad722fccccaae8a7
来源：牛客网

•连续输入字符串，请按长度为8拆分每个字符串后输出到新的字符串数组； 
•长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。

输入描述:
连续输入字符串(输入多次,每个字符串长度小于100)

输出描述:
输出到长度为8的新字符串数组

示例1
输入
abc
123456789
输出
abc00000
12345678
90000000

*/
#include <iostream>
#include <string>
using namespace std;
 
int main()
{
    string s;
    while(cin >> s)
    {
        s = s + "0000000"; //特别强调这里是7个0
        while(s.size() >= 8)
        {
            cout << s.substr(0,8) << endl;
            s = s.substr(8);
        }
    }
    return 0;
}
