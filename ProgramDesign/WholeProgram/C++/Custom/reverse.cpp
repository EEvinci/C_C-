#include <iostream>

int reverse(int number);

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    system("pause");
    return 0;
}

/* 你的代码将被嵌在这里 */

int reverse(int number)
{
    int sum = 0;
    int flag;
    if (number < 0)
    {
        flag = -1;
        number = -number;
    }
    else
    {
        flag = 1;
    }
    while (number != 0)
    {
        int item = number % 10;
        sum = sum * 10 + item;
        number /= 10;
    }
    return sum * flag;
}