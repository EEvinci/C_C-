#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string str = to_string(n);
    int length = str.length();
    if(str[0] == '-')
        length -= 1;
    cout << length;
    
    return 0;
        
}
