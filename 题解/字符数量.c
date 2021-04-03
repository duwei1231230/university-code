/*
链接：https://ac.nowcoder.com/acm/problem/22225
来源：牛客网

题目描述 
请统计一篇英文文章里所有小写字母各出现了几次。

输入描述:
输入若干行，处理到文件结尾。
字符总数<=100000
输出描述:
输出若干行，按字符序输出每种小写字符的出现次数，没有出现的字符不用输出。

示例1
输入
abc abc def 
abab   ccc
ccc ccc
 
输出
a:4
b:4
c:11
d:1
e:1
f:1
*/



/*
直接利用字符的本质是数字;
设置一个数组数量大于z的
然后设置循环,只要字符是大于a,那么就使该数组该字符位置加1
打印的时候就利用整数特性,输出字符;
*/
#include <stdio.h>
int main()
{
    int ch;
    int str[200]={0};
    int i = 0;
    while((ch = getchar()) != EOF)
    {
        if (ch >= 97)
        {
            str[ch] += 1;
        }
    }
    for(i = 97;i<123;i++)
    {
        if (str[i] > 0)
        printf("%c:%d\n", i,str[i]);
    }
    return 0;
}