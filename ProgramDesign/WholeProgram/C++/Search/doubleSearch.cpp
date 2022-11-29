#include <iostream>
using namespace std;

#include <stdio.h>
#define MAX 20
int main()
{
    int x, n;
    int a[MAX];
    cin >> x >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    // judge illegal condition
    int sorted = 0;
    for(int i = 1; i < n; i++){
        if(a[i] <= a[i-1]){
            sorted = 1;
            break;
        }
    }
    if(sorted == 1){
        cout << "Invalid Value";
    }

    // search the specified element
    int start = a[0];
    int 
    system("pause");
    return 0;
}