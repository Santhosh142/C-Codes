/*
PROBLEM STATEMENT:
Given an array A of integers, find the maximum of j-i subjected to the constraints of A[i] <= A[j]

Input Format :
First and only argument is an integer array A.

Output Format :
Return an integer denoting the maximum value of j-i;

Constraints :
1<=N<=10^5

Example Input 
A=[3,5,4,2]

Example Output:
2

Example Explaination
Maximum value occurs for pair (3,4)



*/

#include <bits/stdc++.h>
using namespace std;

int main() 
{
	
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++) 
	cin>>arr[i];
	
	vector<pair<int,int>> v;
	
	for(int i=0;i<n;i++)
	v.push_back(make_pair(arr[i],i));
	
	sort(v.begin(),v.end());
	
	int suffix_max[n];
	suffix_max[n-1]=v[n-1].second;
	for(int i=n-2;i>=0;i--)
	{
		suffix_max[i]=max(v[i].second,suffix_max[i+1]);
	}
	
	int ans=INT_MIN;
	
	for(int i=0;i<n-1;i++)
	{
		ans=max(ans,suffix_max[i+1]-v[i].second);
	}
	
	cout<<ans;
	
	return 0;
}












