#include<bits/stdc++.h>
using namespace std;

// bug in 14
int main(){
    // string str;
    // cin >> str;
    // string year = str.substr(0,4);
    // string month = str.substr(5,2);
    // string day = str.substr(8,2);
    // printf("%s", day);
    // int int_year = stoi(year.c_str());
    // int int_month = stoi(month.c_str());
    // int int_day = stoi(month.c_str());
    // printf("%s", month.c_str());
    // printf("%d", int_day);
    // // int month_arr[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    // // if(int_year%4==0 && int_year%100 != 0 || int_year%400==0){
    // //     month_arr[1] = 29;
    // // }

    // // // for(int i = 0; i < 12; i++){
    // // //     cout << month_arr[i] << " ";
    // // // }
    // // int sum = 0;
    // // for(int i = 0; i < int_month-1; i++){
    // //     sum += month_arr[i];
    // // }
    // // sum += int_day;
    // // cout << sum;

    int year;
    int month;
    int day;

    scanf("%d/%d/%d",&year, &month, &day);
    int d_month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    if(year%4==0 && year%100!=0 || year%400==0){
        d_month[1] = 29; 
    }
    int count = 0;
    for(int i = 0; i < month-1; i++){
        count += d_month[i];
    }
    count += day;
    printf("%d",count);

    system("pause");    
    return 0;
}