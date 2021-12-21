/*
PROBLEM STATEMENT:

Given a string, count all distinct substrings of the given string.

Example:
Input:
abcd
Output:
10

Input:
aaa
Output:
3


*/
#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;


int main()
{
	string s;
	cin >> s;
	int len = s.length();
	set<string> st;
	for(int i=0;i<len;i++)
	{
		for(int j=i;j<len;j++)
		{
			string temp = s.substr(i,j+1);
			st.insert(temp);
		}
	}
	for(auto it=st.begin(); it!=st.end();++it)
	{
		cout << *it << " ";
	}
	return 0;
}

















