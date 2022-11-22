#include<bits/stdc++.h>
using namespace std;
int IsShuiXianFlower( int n );
int main(){
    int n;
    cin >> n;
    if(IsShuiXianFlower(n) == 1)
        cout << "yes";
    else
        cout << "no";
    system("pause");
    return 0;
}


int IsShuiXianFlower( int n ){
    int digit;
    int sum = 0;
    int count = 0;
    
    int a_n = n;
    int t_n = n;
    while(t_n != 0){
        digit = t_n % 10;
        count ++;
        t_n /= 10;
    }
    
    while(n != 0){
        digit = n % 10;
        sum += pow(digit, count);
        n /= 10;
    }
    if(a_n == sum)
        return 1;
    else 
        return 0;
}