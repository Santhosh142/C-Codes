/*
PROBLEM STATEMENT:
Check if an array is formed by consecutive integers
Given an integer array, check if only consecutive integers form the array.

For Example 
Input: {-1,5,4,2,0,3,1}

Output: consecutive integers from -1 and 5

Input : {4,2,4,3,1}
Outpu: "no" four is repetitive;

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin >> ar[i];
	}
	sort(ar,ar+n);
	for(int i=1;i<n;i++)
	{
		if(ar[i]-ar[i-1]!=1)
		{
			 cout << "NO";
			 return 0;
		}
	}
	
	cout << "Yes" ;
	
	
	
	
	return 0;
}















