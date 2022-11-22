#include <iostream>
#include <string>
#include <numeric>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string str;
    // 面向过程式的写法
    str = to_string(n);
    int length = str.length();
    cout << length;
    system("pause");

    int num[length] = {0};
    for (int i = 0; i < length; i++)
    {
        num[i] = stoi(str, 0, str[i]);
        cout << num[i];
        system("pause");
    }
    //    int sum = accmulate(num,num+size(num),0);
    //    // cout << length;
    //    cout << sum;

    system("pause");
    return 0;
}