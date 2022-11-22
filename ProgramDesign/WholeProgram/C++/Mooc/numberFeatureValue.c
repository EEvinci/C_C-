#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n < 0)
        return 0;
    int sum = 0;
    int num = 1;
    int temp = n % 10;
    int flag = 0;
    while(n != 0){
        if(temp%2==1 && num%2==1 || temp%2==0&&num%2==0){
            flag = 1;
        }
        sum += flag * pow(2,num-1);
        flag = 0;
        n /= 10;
        temp = n % 10;
        num++;
    }
    printf("%d", sum);

    system("pause");
    return 0;
}