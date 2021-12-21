/*
PROBLEM STATEMENT:
A non empty str containing only alphabets. print the longest prefix in str which is same as suffux;
prefix and suffix should not be overlapped

print -1 if no prefix exits which is also the suffix without overlap

Do case sensitive comparison wherever necessary
position start from 1.

Input:
"xxAbcxxAbcxx"

Output:
2



*/
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int len = s.length();
	string pre,suf;
	int max_len=0,ind=0;
	while(ind<len/2);
	{
		pre.push_back(s[ind]);
		suf.push_back(s[len-ind-1]);
		if(pre==suf)
		{
			if(pre.length()>max_len)
			max_len=pre.length();
		}
		else
		break;
		
		ind++;
	}
	cout << max_len;
	
	return 0;
}

















