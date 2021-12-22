/*
PROBLEM STATEMENT:
We are given an array A of N integers. The task is to find a peak element in A in O(log N).
An array element is peak if it is greater than its neighbout. For corner elements, consider only one neighbour

FIND THE INDEX OF PEAK ELEMENT

In input array will be first increasing and then decreasing.

Example 1:
Input:
N=3
A[] = {1,2,3}
Output:
Explaination: in the given array, 3 is the peak element as it is greater than its neighbour

Example 2:
5
2 

Output:
5

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
	
	int low=0, high=n-1;
	
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(ar[0]>ar[1])
		{
			cout << ar[0] ;
			break;
		}
		if(ar[n-1]>ar[n-2])
		{
			cout << ar[n-1];
			break;
		}
		else if(ar[mid]>ar[mid-1])
		{
			low=mid+1;
		}
		else if(ar[mid]<ar[mid-1])
		{
			high=mid-1;
		}
	}
	return 0;
}








