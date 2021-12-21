/*
PROBLEM STATEMENT:
Consider a list with all strings. Sort the list by no.of digits on ascending order

Sample Input:
dabd  dabcefghijk dddacde cfdddefdde

Sample Output:
dabcefghijk dabd ddacde sfdddefdde


*/

#include <bits/stdc++.h>
using namespace std;
 
bool condition(string a,string b)
{	
	int cnta=0;
	int cntb=0;
	for(int i=0;i<a.length();i++)
	if(a[i]=='d')
	cnta++;
 
	for(int i=0;i<b.length();i++)
	if(b[i]=='d')
	cntb++;
 
	if(cnta < cntb)
	return true;
	else
	return false;
}
 
int main() {

	int n;
	cin>>n;
 
	string s[n];
	for(int i=0;i<n;i++)
	cin>>s[i];
 
 
	sort(s,s+n,condition);
 
	for(int i=0;i<n;i++)
	cout<<s[i]<<" ";
 
	return 0;
}
