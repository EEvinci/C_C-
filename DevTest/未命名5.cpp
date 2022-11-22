#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m;
    for(int i = 1; i <= 7; i++){
        cin >> m;
        if(m == n)
        {
            cout << "Lucky You!" << endl;
            return 0;
        }
        else if(m > n)
            cout << "Too big" << endl;
        else
            cout << "Too small" << endl;
    }
    cout << "Game Over!" << endl;
    
    return 0;
}

