/*
Write a program in C++ to find the maximum for each and every contiguos subarray of size k from a given array

Input:
1 3 6 21 4 9 12 3 16 10
4
output:
1 3 6 21 --> 21

3 6 21 4 --> 21
.
.
.
12 3 16 10 --> 16


*/

#include<iostream>
using namespace std;

int main()
{
	int n,k;
	n=10;
	k=4;
	int arr[n]={1,3,6,21,4,9,12,3,16,10};0
//	cout << "enter n value " << endl;
//	cin >> n;
//	cout << "enter k value " << endl;
//	cin >> k;
//	int arr[n];
//	for(int i=0;i<n;i++)
//	{
//		cin >> arr[i];
//	}
	for(int i=0;i<n-k;i++)
	{
		int max=arr[i];
		for(int j=i;j<=i+k;i++)
		{
			if(max<arr[j])
			{
				max=arr[j];
			}
		}
		cout << max << " ";
	}
	
	
	return 0;
}










