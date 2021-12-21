/*
Consider a list with all strings. Sort the list by calculating the length of the strings in the 
given list in ascending order.

Input Format:
Input a list of strings

Output Format:
print the list based on the string lengths

Sample Input:
jack and jil went to hillstation

Sample output:
to and jil jack went hillstation


*/
#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
bool condition(string a,string b)
{
	if(a.size() < b.size())
	return true;
	else
	return false;
}

int main() 
{
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
















