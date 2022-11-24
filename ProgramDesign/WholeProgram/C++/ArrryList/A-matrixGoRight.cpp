#include <bits/stdc++.h>
using namespace std;

int a[15][15];

int main()
{
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int temp[n] = {0};
    for (int i = 0; i < n; i++)
    {
        temp[i] = a[i][n - 1];
        cout << temp[i] << " ";
    }
    cout << endl << "second" << endl;

    for (int i = 0; i < n ; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            a[i + 1][j + 1] = a[i][j];
            cout << a[i][j] << " ";
        }
        cout << "\n" ;
    }
    cout << "third" << endl;

    for (int i = 0; i < n; i++)
        a[i][0] = temp[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    system("pause");
    return 0;
}
