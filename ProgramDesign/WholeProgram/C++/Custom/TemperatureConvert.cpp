#include<iostream>
using namespace std;
int main(){
    int lower;
    int upper;
    cin >> lower >> upper;
    //一方面是根据题目要求的条件判断极值点需要做条件限制
    if(lower > upper || upper > 100 || lower < 0){
        cout << "Invalid.";
        return 0;//注意判断意外情况后的程序终止
    }
    cout << "fahr celsius\n";//注意换行的输出格式要求
    for(int i = lower; i <= upper; i++){
        double celsius = 5.0 * (i - 32) / 9;
        printf("%4d%6.1lf\n",i,celsius);//一方面是看格式要求进行输出
    }
    
    return 0;
}