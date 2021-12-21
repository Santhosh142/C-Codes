/*
Find longest substring of unique characters which is case insensitive.

Sample Input:
abcdabc

Sample output:
abcd

Sample Input 1:
abababab

Sample Output 1:
ab


*/
#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

bool isUnique(string word)
{
	sort(word.begin(),word.end());
	int len = word.length();
	for(int i=0;i<len;i++)
	{
		if(i==0)
		{
			if(word[i]==word[i+1])
			{
				return 0;
			}
		}
		else if(i==len-1)
		{
			if(word[i]==word[i-1])
			{
				return 0;
			}
		}
		else
		{
			if(word[i]==word[i+1])
			{
				return 0;
			}
		}
	}
	return 1;	
}

int main()
{
	string str;
	cin >> str;
	int len = str.length();
	int max_len = 0;
	string res;
	for(int i=0;i<len;i++)
	{
		for(int j=i+1;j<=len;j++)
		{
			string sub = str.substr(i,j);
			if(isUnique(sub))
			{
				if(sub.length()>max_len)
				{
					max_len = sub.length();
					res=sub;
				}
			}
		}
	}
	cout << res;
	return 0;
}

















