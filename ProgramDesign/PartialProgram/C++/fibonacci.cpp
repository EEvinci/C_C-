#include <stdio.h>
#include <iostream>

int fib(int n);
void PrintFN(int m, int n);

int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    system("pause");
    return 0;
}

/* 你的代码将被嵌在这里 */

/*
    判断一个数的最大Fibonacci项数
*/
int max_item(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (fib(i) >= n)
        {
            return i;
        }
    }
}
/*
    返回第n项Fibonacci数
*/
int fib(int n)
{
    int n1 = 1;
    int n2 = 1;
    if(n == 1)
        return n1;
    if(n == 2)
        return n2;
    int item;
    for (int i = 3; i <= n; i++)
    {
        item = n1 + n2;
        n1 = n2;
        n2 = item;
    }
    return item;
}

/*
    输出m-n之间的所有Fibonacci数
*/
void PrintFN(int m, int n)
{
    int index = 0;
    for (int i = m; i <= n; i++)
    {
        int max = max_item(i);  // 计算一个数的最大Fibonacci项，减少不必要的循环次数
        for (int j = 1; j <= max; j++)
        {
            if (index == 0)  // 第一项的格式控制
            {
                if (fib(j) + fib(j + 1) == i)
                {
                    printf("%d", i);
                    index = 1;
                }
            }
            else{
                if(fib(j) + fib(j + 1) == i){
                    printf(" %d", i);
                }
            }
        }
    }
    if(index == 0)
        printf("No Fibonacci number");
}
