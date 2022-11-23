#include <bits/stdc++.h>
using namespace std;

int a[15][15];

int main()
{
    int n;
    cin >> n;
    // first, fill in the first colum and matrix diagnal elements
    for (int i = 0; i < n; i++)
    {
        a[i][0] = a[i][i] = 1;
    }
    // second, calculate the other elements based on existing elements
    // in this step, we should analysis it by its data distribusion chart
    // because in the previous step, wo have calculated some datas in the first and second row
    // so the value of row loop variable need to start from 2
    for (int i = 2; i < n; i++)
    {
        // and the column loop variable need to start from 1
        // you 5need to control the upper bound of the variable j
        // its value can not be greater than i
        // it aims to limit the count of number in one row
        for (int j = 1; j < i; j++)
        {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }

    // third,you can print the result in this step
    for (int i = 0; i < n; i++)
    {
        // you need to control the blanks firstly
        for (int j = 1; j < n - i; j++) // this operation is <, because i==0 in the outside loop,fuck
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            printf("%4d", a[i][k]);
        }
        cout << "\n";
    }

    system("pause");
    return 0;
}