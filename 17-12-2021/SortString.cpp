/*
PROBLEM STATEMENT:
Arrange String characters such that lowercase letters should come first Given input String of 
combination of the lower and upper case arrange characters n such a way that all lowercase letters should come first.

Input:
PyNaTive

Output:
arranging characters giving precedence to lowercase letters:

yaivePNT

*/
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i,j;
	string s;
	cin >> s;
	int len = s.length();
	string res = "";
	for(i=0;i<len;i++)
	{
		if(s[i]>='a' && s[i]<='z')
		res.push_back(s[i]);
	}
	for(i=0;i<len;i++)
	{
		if(s[i]>='A' && s[i]<='Z')
		res.push_back(s[i]);
	}
	cout << res;
}

















