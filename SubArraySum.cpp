/*
PROBLEM STATEMENT

Given an unsorted array A of size N that contains only non-negative integers, find a continuos sub-array which adds to given a number S;
EXAMPLE 1:
Input:
N=5,S=12
A[] = {1,2,3,7,5}
Output:
2 4
*/

#include<iostream>
using namespace std;

int main()
{
	int n,s;
	cout << "enter n value"<<endl;
	cin >> n;
	cout <<"Enter s value"<<endl;
	cin >> s;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	for(int i=0;i<n;i++)
	{
		int sum=0;
		int flag=1;
		for(int j=i;j<n;j++)
		{
			sum+=arr[j];
			if(sum==s)
			{
				cout << i<<" "<<j<<endl;
				flag=0;
				break;
			}
		}
		if(!flag)
		break;
	}
	
	return 0;
}
