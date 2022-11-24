#include<iostream>
#include<cmath>
using namespace std;

char op[80];

int main(){
    int i = 0;
    while((op[i] = getchar()) != '\n'){
        i++;
    }
    op[i] = '\0';
    // uppercase 2 lowercase or lowercase 2 uppercase
    // interchange between letters
    // numeric characters to letters

    // above examples all depend on operation of the ascii code value
    for(int i = 0; op[i]!='\0'; i++){
        if(op[i] >= 'A' && op[i] <= 'Z'){
            op[i] = 'A' + 'Z' - op[i];
        }
        
    }
    puts(op);
    
    system("pause");
    return 0;
}