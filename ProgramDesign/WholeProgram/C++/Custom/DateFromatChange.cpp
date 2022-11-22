    #include<iostream>
    #include<cstring>
    using namespace std;

    int main(){
        string date;
        cin >> date; //MM-dd-yyyy
        string year = date.substr(6,4);
        // cout << year;  
        string str = date.substr(2,1);
        string month = date.substr(0,2);
        string day = date.substr(3,2);
        
        string newdate = year+str+month+str+day;  
        cout << newdate;

        system("pause");
        return 0;
    }