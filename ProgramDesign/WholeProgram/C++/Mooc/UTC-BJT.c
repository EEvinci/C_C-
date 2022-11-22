#include<stdio.h>
#include<stdlib.h>
/*
    UTC = BJT - 8
    coordinated universal time 世界协调时
*/
/*
    input: BJT
    output: UTC
*/
int main(){
    int b_time;
    scanf("%d", &b_time);
    int b_hour = b_time / 100;
    int b_min = b_time % 100;

    int u_hour;
    int u_min;
    if(b_hour < 8){
        u_hour = b_hour - 8 + 24;
        u_min = b_min;
    }
    else{
        u_hour = b_hour - 8;
        u_min = b_min;
    }
    int u_time = u_hour*100 + u_min;
    printf("%d", u_time);

    system("pause");
    return 0;
}