/*
// PROBLEM 2 -------->
Given an array A of N positive numbers. The task is to find the 
position where equilibrium first occurs in the array. Equilibrium 
position in an array is a position such that the sum of elements before 
it is equal to the sum of   elements after it.
Input Format: 
The first line contains an integer, denoting the size of the array. 
The second line contains integers denoting the elements of the array.
Output Format:
Print equilibrium index.

INPUT
7
[-7, 1, 5, 2, -4, 3, 0]
OUTPUT
3


*/
#include<bits/stdc++.h>
using namespace std;

int subSum(int arr[],int s,int e)
{
	int sum = 0;
	for(int i=s;i<=e;i++)
	{
		sum+=arr[i];
	}
	return sum;
}
int main()
{
	int n;
	cin >> n;
	
	int arr[n];
	for(int i=0;i<n;i++)
	cin >> arr[i];
	for(int i=1;i<n-1;i++)
	{
		int l=subSum(arr,0,i-1);
		int r=subSum(arr,i+1,n-1);
		if(l==r)
		{
			cout << i << endl;
			return 0;
		}
	}
	cout << "Not Possible " << endl;
	return 0;
}















