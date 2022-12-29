#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
    int i, j, k = 5, *p;

    p = &k;
    i = ++(*p);
    j = (*p)++;
    printf("%d %d %d", i, j, k); /* 输出的数字之间有一个空格 */

    system("pause");
    return 0;
}