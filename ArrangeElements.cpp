/*
PROBLEM STATEMENT

Given an unsorted array arr[] of size N having both negative and positive integers.The task is place all negative
element at the end of array without changing the order of positive element and negative element.

EXAMPLE 1:
Input:
n=8
arr[] = {1,-1,3,2,-7,-5,11,6}
Output:
1,3,2,11,6,-1,-7,-5

*/

#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	int output[n];
	int ind = 0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]>0)
		{
			output[ind++]=arr[i];
//			ind++;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]<0)
		{
			output[ind++]=arr[i];
//			ind++;
		}
	}
	
	for(int i=0;i<n;i++) cout<<output[i]<< " ";
	return 0;
}
