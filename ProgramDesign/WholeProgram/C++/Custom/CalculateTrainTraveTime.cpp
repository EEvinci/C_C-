#include<iostream>
using namespace std;
int main(){
    int start_time;
    int arrive_time;
    cin >> start_time >> arrive_time;

    int cost_time;
    int cost_time_hour;
    int cost_time_minute;

    // separate the hour and minute from the time
    int start_time_hour = start_time / 100;
    int arrive_time_hour = arrive_time / 100;
    int start_time_minute = start_time % 100;
    int arrive_time_minute = arrive_time % 100;
    
    // detemine if the time is equal
    if(start_time_hour == arrive_time_hour){
        //derectly print the cost_time
        cost_time_hour = 0;
        cost_time_minute = arrive_time_minute - start_time_minute;
        printf("%02d:%02d",cost_time_hour,cost_time_minute);
    }else if(start_time_minute == arrive_time_minute){
        cost_time_hour = arrive_time_hour - start_time_hour;
        cost_time_minute = 0;
        printf("%02d:%02d",cost_time_hour,cost_time_minute);
    }else if(arrive_time_minute < start_time_minute){
        cost_time_minute = arrive_time_minute - start_time_minute + 60;
        cost_time_hour = arrive_time_hour - start_time_hour -1;
        printf("%02d:%02d",cost_time_hour,cost_time_minute);
    }else{
        cost_time_hour = arrive_time_hour - start_time_hour;
        cost_time_minute = arrive_time_minute - start_time_minute ;
        printf("%02d:%02d",cost_time_hour,cost_time_minute);
    }

    system("pause");
    return 0;
}