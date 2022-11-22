#include <bits/stdc++.h>
using namespace std;
bool is_prime_number(int n);
int main()
{
    long int n;
    cin >> n;
    int cnt = 0;

    for (int i = 2; i <= n; i++)
    {
        if (is_prime_number(i))
        {
            printf("%6d", i);
            cnt++;
            if (cnt % 10 == 0)
                printf("\n");
        }
    }
    printf("\n");

    system("pause");
    return 0;
}
bool is_prime_number(int n)
{
    int is_prime = 1;
    if (n <= 1)
        is_prime = 0;
    else if (n == 2)
        is_prime = 1;
        
    else if (n % 2 == 0)
        is_prime = 0;
    else
        is_prime = 1;

    int limit = sqrt(n);
    for (int i = 3; i <= limit; i++)
    {
        if (n % i == 0)
            is_prime = 0;
    }
    if (is_prime == 0)
        return false;
    else
        return true;
}
