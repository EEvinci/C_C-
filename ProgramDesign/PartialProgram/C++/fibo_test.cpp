#include <stdio.h>
#include <iostream>

int fib(int n);
void PrintFN(int m, int n);

int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    system("pause");
    return 0;
}

int fib( int n ){
    int n1 = 1;
    int n2 = 1;
    int sum = 0;
    if(n == 1 || n == 2)
        sum = 1;
    else {
        n -= 2;
        while(n--){
            sum = n1 + n2;
            n1 = n2;
            n2 = sum;
        }
    }
    return sum; 
}
void PrintFN( int m, int n ){
    int item = 0;  // control the format of print out
    int i = 1;  // from the start of fabonacci
    while(fib(i) < m)
        i++;
    while()
}
