#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cin >> a[i][j];
        }
    }
    
    int all_sum = 0;
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            all_sum += a[i][j];
            if(i==n-1 || j==n-1 || i+j==n-1){
                sum+=a[i][j];
            }
        }
    }
    int result;
    result = all_sum - sum;
    
    cout << result;

    system("pause");
    return 0;
}