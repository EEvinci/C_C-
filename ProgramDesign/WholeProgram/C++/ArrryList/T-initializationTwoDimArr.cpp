#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 对于二维数组来说
    // 如果对全部元素赋值，那么第一维的长度可以不给出
    // 一定要给出第二维的长度
    int c[][2] = {{2, 3}, {42, 3}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", c[i][j]);
        }
    }

    // 指定行数，在其中初始化某个数组元素，其余不初始化
    static int b[4][3] = {{}, {}, {}, {9}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d", b[i][j]);
        }
    }

    system("pause");
    return 0;
}
