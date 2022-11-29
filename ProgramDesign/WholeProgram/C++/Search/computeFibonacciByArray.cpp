#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    if (n <= 0 || n > 46)
        cout << "Invalid.";
    else
    {
        int a[n];
        a[0] = 1;
        a[1] = 1;
        for (int i = 2; i < n; i++)
        {
            a[i] = a[i - 1] + a[i - 2];
        }

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            printf("%11d", a[i]);
            count++;
            // Format control
            if ((count) % 5 == 0)
            {
                if (i + 1 == n && n % 5 == 0)
                {
                }
                else
                {
                    cout << endl;
                }
            }
        }
        cout << endl;
    }

    system("pause");
    return 0;
}