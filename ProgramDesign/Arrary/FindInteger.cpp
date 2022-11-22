#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int x;
    cin >> n >> x;
    int a[n];
    int flag = 0;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (x == a[i])
        {
            flag = 1;
            index = i;
        }
    }
    if(flag == 1){
        cout << index;
    }
    else{
        cout << "Not Found";
    }

    system("pause");
    return 0;
}