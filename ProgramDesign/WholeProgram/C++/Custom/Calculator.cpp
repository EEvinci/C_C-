#include <iostream>
using namespace std;
int main()
{
    int m, n;
    char op;
    cin >> m >> op >> n;
    double result = 0;
    switch (op)
    {
    case '+':
        result = m + n;
        cout << result;
        break;
    case '-':
        result = m - n;
        cout << result;
        break;
    case '*':
        result = m * n;
        cout << result;
        break;
    case '/':
        if (n == 0)
        {
            break;
        }
        else
            result = m / n;
        cout << result;
        break;
    case '%':
        if (n == 0)
        {
            break;
        }
        else
            result = m % n;
        cout << result;
        break;
    default:
        cout << "ERROR";
        break;
    }

    return 0;
}