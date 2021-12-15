/*
PROBLEM STATEMENT:
String S is given create a string with the first letter of every word in the string

Example 1:
input:
S="program for sorting"
output:
"pfs"

*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	int len = s.length();
	string res="";
	for(int i=0;i<len;i++)
	{
		if(i==0)
		res+=s[i];
		else
		{
			if(s[i]==' ')
			{
				res+=s[i+1];
			}
		}
	}
	cout << res;
	return 0;
}
