#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    int odd_num = 0;
    int even_num = 0;

    scanf("%d", &n);
    while(n != -1){  
        if(n % 2 == 0){
            even_num++;
        }
        else{
            odd_num++;
        }
        scanf("%d", &n);
    }
    printf("%d %d",odd_num, even_num);

    system("pause");
    return 0;
}