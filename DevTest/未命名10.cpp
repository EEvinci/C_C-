	#include<bits/stdc++.h>
	#include<iostream>
	#include<string> 
	using namespace std;
	int main(){
	    long int x;
	    cin >> x;
	    string str = to_string(x);
	    int i = 0;
	    while(1){
	        if(str[i] != '\0')
	            cout << str[i] << " ";
	        else 
	        	break;
	        i++;
	    }
	    
	    return 0;
	}
