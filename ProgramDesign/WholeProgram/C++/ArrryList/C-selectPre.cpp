#include<bits/stdc++.h>
using namespace std;
#define NUMBER 101
int main(){
	static int flag[NUMBER];
    for(int i = 2; i <= 100; i++){
        flag[i] = 1;
    }
    for(int i = 2; i <= 100; i++){
        flag[2*i] = 0;
    }
    for(int i = 2; i <= 100; i++){
        if(flag[i])
        cout << i << " ";
    }
    
    system("pause");
    return 0;
}