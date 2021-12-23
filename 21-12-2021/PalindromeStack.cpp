/*
PROBLEM STATEMENT:
Raj is a great programmer. he works in multinational company. he has been working for past 2.5 years and is expecting 
a hike in salary. So his manager gave him a task and a stipulation that if he completes the code within 1 day, he will get hike in 
salary .Help Raj in the tast to get salary hike using stacks

[HINT-Raj is good with strings and reversal techniques]

Input:
The input contains strings

Output Format:
print it is a palindrome if the string is a palindrome 
else print it is not a palindrome


*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	int len =s.length();
	stack<char> stk;
	for(int i=0;i<len;i++)
	{
		stk.push(s[i]);
	}
	string res;
	while(stk.size()>0)
	{
		char ch = stk.top();
		res+=ch;
		stk.pop();
	}
	if(res==s)
	cout << "palindrome" << endl;
	else
	cout << "not palindrome" << endl;
	
	return 0;
}

















