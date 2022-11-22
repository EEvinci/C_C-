#include<iostream>
#include<vector>
#include<set>
#include<map>

using namespace std; 

int main()
{/*
	STL: vector
*/
	vector<int> a;  //defination: vector<int/double> [name]
	cout << a.size() << endl; //method: size()
	for(int i = 0; i < 10; i++)
	{
		a.push_back(i); //method: push_back()
	}
	cout << a.size() << endl;
	
	vector<double> b(5,2); //defination: vector<int/double> [name](size,value)
	cout << b.size() << endl;
	b.push_back(3);
	for(auto it = b.begin(); it != b.end(); it++) //method: begin() end()
	{                               //skill: auto it
		cout << *it << " ";         //output: *it
	}
	cout << endl;
	cout << "to get the relation between end element and the size of the vector" << endl;
	cout << "the size is: " << b.size() << endl;
	cout << "the end element is: " << (*b.end()) << endl;	
	//the key point: auto{ *it, begin(), end() }; push_back(); size(); the end element' value is random}
	
	cout << endl  << "\n" << "the next is set" << endl << "\n" ;
	
	/*
		STL: set
	*/
	set<int> s;
	cout << "the init size is:" << s.size() << endl;
	s.insert(1);
	s.insert(3);
	s.insert(2);
	s.insert(53);
	s.insert(3999);
	s.insert(6);
	cout << "after change the size is: " << s.size() << endl;
	cout << "the begin is:" << (*s.begin()) << endl;
	cout << "the end is:" << (*s.end()) << endl;
	cout << "now the output is the element of the set:";
	for(auto it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
	cout << "the next element of the last element is the size of the set" << endl;
	cout << "the size is:" << s.size() << endl;
	cout << "the end-next element is: " << (*s.end()) << endl;
	// cout << set(4);
	cout << "the method: find()" << endl;
	cout << (s.find(6) != s.end());
	//the key point: {insert(); begin(); end(); the end elemt is the size of set}
	cout << endl;
	
	cout << "the next is map" << endl;
	
	/*
		STL:map
	*/
		
	system("pause");
	
	return 0;
}
