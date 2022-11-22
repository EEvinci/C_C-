#include<stdio.h>
int main(){
    // actually i do not know 
    // why this program is fault in pta when i use c++ 
    // but it's not important
    double x;
    double y;
    char ch;
    
    scanf("%lf%c%lf",&x,&ch,&y);
    
    double result = 0;

    if(ch == '+'){
        result = x + y;
        printf("%.2f",result);
    }
    else if(ch == '-'){
        result = x - y;
        printf("%.2f",result);
    }
    else if(ch == '*'){
        result = x * y;
        printf("%.2f",result);
    }
    else if(ch == '/')
    {
        if(y == 0){
            printf("Divisor can not be 0!");
        }
        else{
            result = x / y;
            printf("%.2lf",result);
        }
    }
    else{
        printf("Unknown operator!");
    }
//     switch(ch){
//         case '+':
//             result = x + y;
//             printf("%.2f",result);    
//             break;
//         case '-':
//             result = x - y;
//             printf("%.2f",result);
//             break;
//         case '*':
//             result = x * y;
//             printf("%.2f",result);
//             break;
//         case '/':
//             if(y == 0){
//                 cout << "Divisor can not be 0!";
//             }
//             else{
//                 result = x / y;
//                 printf("%.2f",result);
//             }                        
//             break;

//         default:
//             cout << "Unknown operator!";
//             break;
//     }
    
    return 0;
}