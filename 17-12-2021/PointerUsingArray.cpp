/*
Write a program in C++ to store n elements in an array and print the elements using pointer

Test Data :
Input number of elements to store in the array : 5
ele[0]=1
ele[1]=2
ele[2]=3
ele[3]=4
ele[4]=5

expected output:
The elements you entered are:
ele[0]=1
ele[1]=2
ele[2]=3
ele[3]=4
ele[4]=5

*/

#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;
int main()
{
//	int *ptr,n;
//	cin >> n;
//	int ar[n];
//	for(int i=0;i<n;i++)
//	cin >> ar[i];
//	
//	for(int i=0;i<n;i++)
//	{
//		ptr=&ar[i];
//		cout << "address of " << *ptr << " is " << ptr << endl; 
//	}

	int *arr,n;
	cin >> n;
	arr=(int*)calloc(n,sizeof(int));
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	for(int i=0;i<n;i++)
	{
		cout << *(arr+i) << endl ;
	}
	
	
	
	return 0;
}




























