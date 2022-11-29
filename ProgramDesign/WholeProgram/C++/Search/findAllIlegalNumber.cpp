#include<iostream>
using namespace std;

#include<stdio.h>
#define MAX 20
int main()
{
    int n,x;
    cin >> n >> x;
    int a[MAX];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int flag = 0;
    for(int i = 0; i < n; i++){
        if(x == a[i]){
           cout << i << endl;
            flag = 1;
        }
    }
    if(flag == 0){
        cout << "Not Found";
    }

    system("pause");
    return 0;
}