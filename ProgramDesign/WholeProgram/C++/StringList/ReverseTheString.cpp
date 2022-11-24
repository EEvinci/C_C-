#include <iostream>
using namespace std;

char op[80];
char r_op[80];

int main()
{
    int i = 0;
    while ((op[i] = getchar()) != '\n')
    {
        i++;
    }
    op[i] = '\0';
    int count = i - 1;
    // putchar(op[count]);  // the output is '!'

    for (int j = 0, i = count; j <= count, i >= 0; j++, i--)
    {
        r_op[j] = op[i];
    }
    puts(r_op);

    system("pause");
    return 0;
}