/*
PROBLEM STATEMENT:
find the maximum repeated element in an array using O(log N)

Input:
7
1 2 3 3 3 4 4

Output:
3


*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
	
	int x;
	cin>>x;
	
	int first=-1;
	int last=-1;
	
	// Finding the first index of element x
	int low=0;
	int high=n-1;
	
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]==x)
		first=mid;
		
		if(arr[mid]>=x)
		high=mid-1;
		else
		low=mid+1;
	}
	
	// Finding the last index of element x
	low=0;
	high=n-1;
	
	while(low<=high)
	{
		int mid=(low+high)/2;
		if(arr[mid]==x)
		last=mid;
		
		if(arr[mid]<=x)
		low=mid+1;
		else
		high=mid-1;
	}
	
	
	// FINAL Frequency of No. X
	if(first==-1)
	cout<<0;
	else
	cout<<last-first+1;
	
	
	
	return 0;
}

















