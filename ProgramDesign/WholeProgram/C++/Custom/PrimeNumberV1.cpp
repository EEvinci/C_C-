#include<bits/stdc++.h>
using namespace std;
int main(){
    int x;
    int is_prime = 1;  // 一开始假定输入的数是素数，原因如下
    cin >> x;

    if(x <= 1)  // 在一开始要对<=1和2做判断
        is_prime = 0;  // 因为任何数都可以整除1,所以for循环要从2开始
    else if(x == 2)  // 从2开始的话又没办法对2进行判断了,因为第一个要整除的数就是自己本身
        is_prime = 1;
    else{
        for(int i = 2; i < x/2; i++){  // 因为只要i能被x整除一次x就不是素数了
            if(x % i == 0)
                is_prime = 0;
        }
        
    }

    if(is_prime == 0)
        printf("x is not a prime number");
    else
        printf("x is a prime number");

    system("pause");
    return 0;
}