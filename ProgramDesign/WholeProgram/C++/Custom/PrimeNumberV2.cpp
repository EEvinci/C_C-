#include <bits/stdc++.h>
using namespace std;
/*
    check if a number is prime
    if yes, output it
    if no, output its factor excluding 1 and itself 
*/
int main()
{
    int x;
    int is_prime = 1;
    cin >> x;

    if (x <= 1)
        is_prime = 0;
    else if (x == 2 || x == 3)
        is_prime = 1;
    else
    {
        for (int i = 2; i <= sqrt(x); i++)
        {
            if (x % i == 0)
                is_prime = 0;
        }
    }

    if (is_prime == 0)
    {
        for(int i = 2; i < x; i++){
            if(x % i == 0){
                cout << i << " ";
            }
        }
    }
    else
        printf("x is a prime number");

    system("pause");
    return 0;
}