#include<iostream>
using namespace std;

/*
指针引用参数的使用方式
*/
void print(int* n){
    cout << n << endl;
    cout << "i'm 1" << endl;
}

void print(int& n){
    cout << n << endl;
    cout << "i'm 2" << endl;
}

int main(){
    int n = 112;

    print(n);
    print(&n);


    system("pause");
    return 0;
}