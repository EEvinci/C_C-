#include<iostream>
using namespace std;
int main(){
    int year;
    int month;
    int day;
    scanf("%d-%d-%d",&day,&month,&year);
    printf("%d-%.2d-%d",year,day,month);

    system("pause");
    return 0;
}