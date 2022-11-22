#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int max;
    int index;
    int temp;
    for(int i = 0; i < n-1; i++){
        max = a[i];
        for(int j = i+1; j < n; j++){
            if(a[j] > max){
                max = a[j];
                index = j;
            }
        }
        temp = a[index];
        a[index] = max;
        max = temp;
    }

    for(int i = 0; i < n; i++){
        cout << a[i];
    }

    system("pause");
    return 0;
}