/*
PROBLEM STATEMENT:
For this challenge you need to take the inpout in the format of strings which only '(' and ')'(open and closed brackets) and 
your task is to check whether the expression is valid or invalid. The expression is valid only if both the open brackets
and closed brackets are equal, else the expression is invalid.

Input Format:
Only line of input contains a string 

Output Format:
check whether the string is valid or not.

Constraints:
1<= length of string <=10000


*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin>> s;
	int len = s.length();
	stack<char> stk;
	for(int i=0;i<len;i++)
	{
		if(s[i]=='(' or s[i]=='[' or s[i]=='{')
		stk.push(s[i]);
		else
		{
			if(stk.size()==0)
			{
				cout << "invalid";
				return 0;
			}
			char ch = stk.top();
			if(s[i]==')')
			{
				if(ch=='(')
				stk.pop();
				else
				{
					cout << "invalid";
					break;
				}
			}
			else if(s[i]==']')
			{
				if(ch=='[')
				stk.pop();
				else
				{
					cout << "invalid";
					break;
				}
			}
			else if(s[i]=='}')
			{
				if(ch=='{')
				stk.pop();
				else
				{
					cout << "invalid";
					break;
				}
			}
		}
	}
	if(stk.size()==0)
	cout << "valid";
	else
	cout << "invalid";
	return 0;
}

















