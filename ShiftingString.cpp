/*
PROBLEM STATEMENT:

Two strings s and goal are provided return true if and only if s can become goal aftersome number of shifts on s.
A shift on s consists of moving the leftmost character of s to the rightmost position.

For example if s="abcde", then it will be "bcdea" after one shift.

Example1:
Input:
s="abcde",goal="cdeab"
output:
true

Example2:
Input:
s="abcde", goal="abced"
Output:
false


*/
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s,g;
	cin >> s;
	cin >> g;
	int len=s.length();
	int flag=0;
	int ind=len;
	while(ind>0)
	{
		for(int i=1;i<len;i++)
		{
			swap(s[i],s[i-1]);
		}
		if(s==g)
		{
			flag=1;
			break;
		}
		ind--;
	}
	if(flag)
		cout << "true" << endl;
	else
		cout << "false" << endl;
	
	return 0;
}





















