#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        if(i % 2 == 1){
            if(i == 1)
                printf("%d", i);
            else
                printf(" %d", i);
        }
    }
    system("pause");
    return 0;
}