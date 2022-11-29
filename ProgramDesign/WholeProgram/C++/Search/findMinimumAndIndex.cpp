#include <iostream>
using namespace std;

#define MAX 20
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int min = a[0];
    static int mini[MAX];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
            count = 0;
            mini[count] = i;
            count ++;
        }
        else if (min == a[i])
        {
            mini[count] = i;
            count++;
        }
    }

    int i = 0;
    while(mini[i]){
        
    }
}