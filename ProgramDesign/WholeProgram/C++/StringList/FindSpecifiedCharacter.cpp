#include<iostream>
using namespace std;

char op[80];

int main(){
    char ch;
    cin >> ch;

    getchar(); // getchar() to absorb space

    int i = 0;
    while((op[i] = getchar() ) != '\n' ){
        i++;
    }
    op[i] = '\0';

    int flag = -1;
    for(int i = 0; op[i] != '\0'; i++){
        if(op[i] == ch)
            flag = i;
    }

    if(flag >= 0)
        cout << "index = " << flag;
    else
        cout << "Not Found";

    system("pause");
    return 0;
}