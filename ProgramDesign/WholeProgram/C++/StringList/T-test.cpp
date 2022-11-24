#include<iostream>
using namespace std;

char op[80];

int main(){
    int i = 0;
    while((op[i] = getchar() ) != '\n' ){
        i++;
    }
    op[i] = '\0';

    int result = 0;
    for(int i = 0; op[i] != '\0'; i++){
        op[i] = op[i] - '0';
    }
    
    cout << op[0];

    system("pause");
    return 0;
}