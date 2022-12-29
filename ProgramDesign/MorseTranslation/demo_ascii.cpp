#include<iostream>
using namespace std;
int main(){
    string str = "";
    int a = 0;
    for(int i = 0; i < 26; i++){
        str += i+'a';
    }
    cout << str;

    system("pause");
    return 0;
}