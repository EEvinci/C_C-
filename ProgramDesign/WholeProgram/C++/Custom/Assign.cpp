#include<iostream>
#include<string>
using namespace std;

#define N 10

int main(){    
    int letter; 
    int digit; 
    int other;
    letter = digit = other = 0;
        
    char op[N];
    for(int i = 0; i < N; i++){
        // getchar() can read space and carriage return characters
        // meanwhile cin can not do it
        op[i] = getchar();
        if(op[i] <= 'z' && op[i] >= 'a' 
           || op[i] >= 'A' && op[i] <= 'Z')
            letter++;
        else if(op[i] >= '0' && op[i] <= '9')
            digit++;
        else 
            other++;
    }
    printf("letter = %d, digit = %d, other = %d",letter,digit,other);
    
    system("pause");
    return 0;
}