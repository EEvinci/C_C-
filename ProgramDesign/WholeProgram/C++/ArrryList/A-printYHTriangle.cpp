#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n][n];
    // first, fill in the first colum and matrix diagnal elements
    for (int i = 0; i < n; i++)
    {
        a[0][i] = a[i][i] = 1;
    }
    // second, calculate the other elements based on existing elements
    // in this step, we should analysis it by its data distribusion chart
    // because in the previous step, wo have calculated some datas in the first and second row
    // so the value of row loop variable need to start from 2
    for (int i = 2; i < n; i++)
    {
        // and the column loop variable need to start from 1
        // you need to control the upper bound of the variable j
        // its value can not be greater than i
        // it aims to limit the count of number in one row
       for(int j = 1; j < i; j++){
            a[i][j] = a[i-1][j-1] + a[i-1][j];
       }
    }

    // third,you can print the result in this step
    for(int i = 0; i < n; i++){
        // you need to control the blanks firstly
        for(int j = 1; j < n-i; j++){
            
        }
    }
    system("pause");
    return 0;
}