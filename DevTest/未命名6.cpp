#include<bits/stdc++.h>
using namespace std;
double fact(int n){
    double result = 1;
    for(int j = 1; j <= n; j++){
        result *= j;
    }
    return result;
}

int main(){
    int n ;
    cin >> n;
    if(n > 10)
        return 0;
    double sum = 0;
    for(int i = 1; i <= n; i++){
        sum += fact(i);
    }
    printf("%.0f\n", sum);    
    
    return 0;
}
