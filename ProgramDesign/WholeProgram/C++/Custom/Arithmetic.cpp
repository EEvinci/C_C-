#include<iostream>
using namespace std;
int main(){
    double x;
    double y;
    char ch;
    cin >> x >> ch >> y;
    double result;

    if(ch == '+'){
        result = x + y;
        printf("%.2f",result);
    }else if(ch == '-'){
        result = x - y;
        printf("%.2f",result);
    }else if(ch == '*'){
        result = x * y;
        printf("%.2f",result);
    }else if(ch == '/')
    {
        if(y == 0){
            printf("Divisor can not be 0!");
            system("pause");
            return 0;
        }
        result = x / y;
        printf("%.2f",result);
    }else{
        printf("Unknown operator!");
    }
    
    system("pause");
    return 0;
}