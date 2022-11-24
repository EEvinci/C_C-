// 7-6 字符串转换成十进制整数

// 输入一个以#结束的字符串，本题要求滤去所有的非十六进制字符（不分大小写），组成一个新的表示十六进制数字的字符串，
// 然后将其转换为十进制数后输出。如果在第一个十六进制字符之前存在字符“-”，则代表该数是负数。

// 输入格式：
// 输入在一行中给出一个以#结束的非空字符串。

// 输出格式：
// 在一行中输出转换后的十进制数。题目保证输出在长整型范围内。

// 输入样例：
// +-P-xf4+-1!#
// 输出样例：
// -3905

#include <bits/stdc++.h>
using namespace std;

#define inf 0x3f3f3f3f
char op[inf];

int main()
{
    int i = 0;
    while ((op[i] = getchar()) != '#')
        i++;
    op[i] = '\0';

    // judge if is negetive
    int flag = 1;
    // int is_ox = 0;
    int index;
    for (int i = 0; op[i] != '\0'; i++)
    {
        if (op[i] <= '9' && op[i] >= '0' || op[i] <= 'F' && op[i] >= 'A' || op[i] <= 'f' && op[i] >= 'a')
        {
            // is_ox = 1;
            index = i;
            break;
        }
    }
    for(int i = 0; op[i]!='\0'; i++){
        if(op[i] == '-' && i>index)
            flag = -1;
    }
    
    // extract valid integer
    int op_con[inf];


}