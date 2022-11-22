//#include<bits/stdc++.h>
//#include<algorithm>
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int m;
    cin >> m;
    int flag = 1;
    if(m <= 0 || m == 1)
        flag = 0;
    for(int i = 2; i <= sqrt(m); i++){
        if(m % i == 0)
            flag = 0;
    }
    if(flag == 1)
        cout << "Yes";
    else
        cout << "No";
    
    return 0;
}

