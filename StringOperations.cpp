#include<iostream>
#include<string>
using namespace std;

int main()
{
	// string declaration
	char ar[]="string";
	cout << ar << endl;
	
	char str1[20]={'s','a','n','t','h','o','s','h'};
	cout << str1 <<endl;
	
	char str2[15]={'r','a','m'};
	cout << str2 << endl;
	
	string st1="Hello";
	string st2="World";
	
	string str3 = st1+st2;
	cout << str3 << endl;
	string str4 = st1.append(st2);
	cout << str4 << endl;
	
	string str5="My name is santhosh";
	string arrr1[20] ={str5.split(' ')}
	cout << arrr1;
	return 0;
}
