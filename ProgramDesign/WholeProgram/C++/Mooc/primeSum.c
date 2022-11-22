#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int is_prime(int n);
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int sum = 0;
    for(int i = n; i <= m; i++){
        if(is_prime(i) == 1){
            sum += i;
        }
    }
    printf("%d", sum);
    
    system("pause");
    return 0;
}
int is_prime(int n){
    if(n <= 1)
        return 0;
    if(n == 2)
        return 1;
        
    int flag = 0;
    if(n % 2 == 1)
        flag = 1;
    else
        flag = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            flag = 0;
    }
    return flag;
}