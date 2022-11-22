#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    // two ways to enter
    // cin or getline(cin, str)
    // the difference of them is that
    // cin uses the space as separator
    // but getline(cin, str) can read in an entire line of strings
    
    /*
        the first way
    */
    // cin >> str;
    // string str2 = "lichen";
    // string str3 = str + str2;
    // cout << str3;

    /*
        the second way
    */
    getline(cin, str);
    // string str2 = "haoshuai";
    // string str3 = str + str2;
    // cout << str3;

    /*
        get the length of the string
    */
   int length;
   length = str.length();
   cout << length << endl;


   /*
        get the substring of the string
   */
    string sub = str.substr();
    
    // print all characters starting at subscript 2
    string sub1 = str.substr(2);
    
    // print 2 characters starting at subscript 0
    string sub2 = str.substr(0,2);
    
    // get one character of the string
    char op = sub[2];

    cout << sub << endl;
    cout << sub1 << endl;
    cout << sub2 << endl;
    cout << op << endl;

    system("pause");
    return 0;
}