#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, x;
    int flag = 0;
    int index;
    cin >> n >> x;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n; i++){
        if(a[i] == x){
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
}