#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double sum = 0;
    double eps;
    cin >> eps;

    double index;
    int flag = 1;
    int den = 1;

    // this place should use do-while loop
    do{
        index = flag * 1.0 / den;
        sum += index;
        flag = -flag;
        den += 3;
    }while(fabs(index) > eps);
    printf("sum = %.6f", sum);

    system("pause");
    return 0;
}