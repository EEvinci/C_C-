#include <bits/stdc++.h>
using namespace std;
int main()
{
    // static int a[4][3] = {1, 2, 3, 0, 0, 0, 4, 5};
    // static int b[4][3] = {{1, 2, 3}, {}, {4, 5}};

    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("a = %d ", a[i][j]);
    //     }
    // }
    // printf("\n");
    // for (int i = 0; i < 4; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         printf("b = %d ", b[i][j]);
    //     }
    // }

    int a[3][3] = {1};
    for (int k = 1; k <= 100; k++)
    {
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                printf("a = %d ", a[i][j]);
            }
        }
        printf("\n");
    }

    system("pause");
    return 0;
}