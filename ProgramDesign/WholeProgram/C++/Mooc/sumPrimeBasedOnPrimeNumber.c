#include <stdio.h>
#include<stdlib.h>

int main(int argc, char **argv) {
    int x,y;
    scanf("%d %d",&x,&y);
    int i;
    int j;
  
    int cnt=0;
    int sum=0;

    for(j=2;cnt<y;j++){
          int isprime=1;
        for(i=2;i<j;i++){
            if(j%i==0){
                isprime=0;
                break;
            }
        }
        if(isprime==1){
            cnt++;
        }
        if(cnt>=x&&isprime==1){
            sum+=j;
        }
    }    
    
    printf("%d",sum);
   
    system("pause");
    return 0;
    
}
