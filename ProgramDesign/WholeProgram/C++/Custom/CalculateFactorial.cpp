#include<iostream>
#include<iomanip>

using namespace std;
// using namespace ios;

int main(){
    int n;
    cin >> n;
    double product = 1;
    for(int i = 1; i <= n; i++){
        product *= i;
    }
    
    // printf("product = %.0f",product);

    // cout在输出较大的数时默认会以科学计数法的形式进行输出，从而导致一些输出不符合题目输出要求
    // 不使用科学计数法，使用正常位数的十位数进行输出
    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(0);
    cout << product;
    
    system("pause");
    return 0;
}