/*
Write a c++ program to calculate the postfix expression

Input:
6324+-*

Output:
-18

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int n = s.length();
	stack < char> stk;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='+' or s[i]=='-' or s[i]=='*' or s[i]=='/')
		{
			if(stk.size()<2)
			{
				cout << "Insufficient elements in stacks" << endl;
				return 0;
			}
			int b = (int)stk.top();
			stk.pop();
			int a = (int)stk.top();
			stk.pop();
			if(s[i]=='+')
			{
				int ch = a+b;
				char c=(char) (ch+'0');
				stk.push(c);
			}
			else if(s[i]=='-')
			{
				int ch = a-b;
				char c=(char) (ch+'0');
				stk.push(c);
			}
			else if(s[i]=='*')
			{
				int ch = a*b;
				char c=(char) (ch+'0');
				stk.push(c);
			}
			else if(s[i]=='/')
			{
				int ch = a/b;
				char c=(char) (ch+'0');
				stk.push(c);
			}
		}
		else
		{
			stk.push(s[i]);
		}
	}
	cout << stk.top();
	return 0;
}
