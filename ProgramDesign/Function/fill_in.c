#include <stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int i;
    int flag;
    int denominator;
    double item;
    double s;
    double eps;
    scanf("%lf", &eps);
    i = 0;
    flag = 1;
    denominator = 1;
    item = 1.0;
    s = 0;
    while (fabs(item) >= eps)
    {
        item = flag * 1.0 / denominator;
        s = s + item;
        i++;
        flag = -flag;
        denominator = denominator + 2;
    }

    printf("%.2f\n", s);

    system("pause");
    return 0;
}