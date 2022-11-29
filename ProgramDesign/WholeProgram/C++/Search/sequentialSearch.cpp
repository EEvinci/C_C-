#include <iostream>
using namespace std;

#include <stdio.h>
#define MAX 20

// sequential search
int main()
{
    // input
    int x, n;
    scanf("%d %d", &x, &n);
    int a[MAX];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // judge
    for (int i = 0; i < n-1; i++)
    {
        if (a[i + 1] <= a[i])
        {
            cout << "Invalid Value";
            break;
        }
    }

    // search
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            cout << i;
            flag = 1;
        }
    }
    
    // end
    if (flag == 0)
    {
        cout << "Not Found";
    }

    system("pause");
    return 0;
}
