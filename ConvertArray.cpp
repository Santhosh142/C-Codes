/*
Write a program in C++ to convert the array in such a way that double its value and replace the next number
with 0 if current and next element are same

Input:
A[] ={0,3,3,3,0,0,7,7,0,9}

0 3 3 3 0 0 7 7 0 9
Output:
0 6 0 3 0 0 14 0 0 9

*/
#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin >> arr[i];
	
	for(int i=0;i<n-1;i++)
	{
		if(arr[i]==arr[i+1])
		{
			arr[i]=2*arr[i];
			arr[i+1]=0;
			i=i+1;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout << arr[i] << " ";
	}
	
	
	
	
	
	
	
	return 0;
}
