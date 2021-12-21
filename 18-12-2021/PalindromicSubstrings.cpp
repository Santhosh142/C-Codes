/*
Given a string  find all possible palindromic substrings in it.


Input :

str=google

output:
e l g o oo goog

*/
#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s)
{	string t=s;
	reverse(t.begin(),t.end());
	if(s==t)
	return true;
	else
	return false;
}

int main() {
	
	set<string> ans;
	
	string s;
	cin>>s;
	int n=s.length();
	
	for(int i=0;i<n;i++)
	{
		string temp="";
		for(int j=i;j<n;j++)
		{
			temp.push_back(s[j]);
			if(checkPalindrome(temp))
			ans.insert(temp);
			
		}
	}
	
	for(auto u:ans)
	cout<<u<<" ";

	
	return 0;
}
