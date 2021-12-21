/*
PROBLEM STATEMENT:
Replace each array element by its corresponding rank

Given an array of distinct integers, replace each array element by its correspondng rank in the array.
The minimum array element has the rank 1;the second minimum element has rank of 2 and so on ....


Example
Input : {10,8,15,12,6,20,1}
Output: {4,3,6,5,2,7,1}
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >>n;
	int ar[n];
	for(int i=0;i<n;i++)
	cin >> ar[i];
	
	
	set<int> st;
	for(int i=0;i<n;i++)
	st.insert(ar[i]);
	
	int loc=0;
	map<int,int> m;
	for(auto u:st)
	{
		m[u]=++loc;
	}
	
	for(int i=0;i<n;i++)
	{
		cout << m[ar[i]] << " ";
	}
	
	return 0;
}
