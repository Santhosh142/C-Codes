/*
PROBLEM STATEMENT:
You are given a string s consisting of lowercase latin letters. Character c is called kth special iff each substring of s with length 
at least k contains this character c.
You have to find minimum k such that there exists at least one kth-special character.

Input Format:
the first line contains string s consisting of lowercase latin letters

Output Format:
Print one number - the minimum value of k such that there exists at least one kth-special character.

Sample Input 0:
abacaba

Sample Output 0:
2

*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	string s;
	cin>>s;
	int n=s.length();
	int ans=n;
 
	for(int i=0;i<26;i++)
	{
		int last=-1;
		int k=-1;
 
		for(int j=0;j<n;j++)
		{
			if((s[j]-'a')==i)
			{
				k=max(k,j-last);
				last=j;
			}
		}
 
		k=max(k,n-last);
		ans=min(ans,k);
	}
 
	cout<<ans;
 
 
	return 0;
}

