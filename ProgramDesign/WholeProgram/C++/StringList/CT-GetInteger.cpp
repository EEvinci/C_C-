#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main()
{
    int i = 0;
    char op[80];
    char num_op[80];

    while ((op[i] = getchar()) != '\n')
    {
        i++;
    }
    op[i] = '\0';

    int result = 0;
    // 将数字字符转化为数字需要减去'0' (convert numeric character to number need to subtract '0')
    for (int i = 0; op[i] != '\0'; i++)
    {
        if (op[i] <= '9' && op[i] >= '0')
            result = result * 10 + (op[i] - '0');
    }

    cout << result;

    system("pause");
    return 0;
}