/*
PROBLEM STATEMENT:
You are given two arrays which are sorte having distinct elements. There is 1 difference between both the arrays
.The first array is having one element extra added in between the task is to find the index of  the extra element.
Input:
A[] = {2,4,6,8,9,10,12}
B[] = {2,4,6,8,10,12}

Output : 4

Example 2:
Input:
8
11 12 13 14 15 16 17 18
11 12 13 14 15 16 17 

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
	
	int n;
	cin >> n;
	int a[n],b[n];
	
	for(int i=0;i<n;i++)
	cin >> a[i];
	
	for(int i=0;i<n-1;i++)
	cin >> b[i];
	
	int ans=n-1;int mid;
	int low=0,high=n-1;
	while(low<=high)
	{
		mid=low+(high-low)/2;
		if(a[mid]==b[mid])
		low=mid+1;
		else
		{
			if(a[mid]!=b[mid])
			high=mid-1;
			if(ans>mid)
			ans=mid;
		}
	}
	cout << ans;
	
	return 0;
}














