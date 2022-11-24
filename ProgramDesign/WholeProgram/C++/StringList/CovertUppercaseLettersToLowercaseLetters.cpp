#include <iostream>
using namespace std;

char op[30];

int main()
{
    int i = 0;
    while ((op[i] = getchar()) != '#')
        i++;
    op[i] = '\0';
    for (int i = 0; op[i] != '\0'; i++)
    {
        if (op[i] <= 'z' && op[i] >= 'a')
        {
            op[i] -= 32;
        }
        else if (op[i] <= 'Z' && op[i] >= 'A')
        {
            op[i] += 32;
        }
    }
    puts(op);

    system("pause");
    return 0;
}