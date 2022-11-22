#include<iostream>
using namespace std;

int factorsum( int number );
void PrintPN( int m, int n );

int main(){
    int m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    system("pause");
    return 0;
}

int factorsum( int number ){
    int sum = 0;
    for(int i = 1; i < number; i++){
        if(number % i == 0){
            sum += i;
        }
    }
    return sum;
    
}
void PrintPN( int m, int n ){
    int flag = 0;
    for(int i = m; i <= n; i++)
    {
        if(factorsum(i) == i){
            flag = 1;
            for(int j = 1; j < i; j++){
                if(j == 1){
                    printf("%d = 1",i);
                }
                else if(i % j == 0){
                    printf(" + %d",j);
                }
            }
            printf("\n");
        }
    }
    if(flag == 0){
        printf("No perfect number");
    }
        
}
