#include <iostream>
using namespace std;
int main()
{
    int x;
    int result = 0;

    cin >> x;
    if (x <= 0)
    {
        cout << result;
        
        system("pause");
        return 0;
    }
    while (x > 0)
    {
        if (x % 2 != 0)
            result += x;
        cin >> x;
    }

    cout << result;

    system("pause");
    return 0;
}