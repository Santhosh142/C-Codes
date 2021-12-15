/*
PROBLEM STATEMENT

Given a sorted array arr[] of size N, the task is to print all the unique elements in the array.

Example
Input:
arr[] = {1,1,2,2,3,4,5,5}
output:
3 4
*/

#include<iostream>
using namespace std;
void printUnique(int arr[])
{
	int len = sizeof(arr);
	int output[len];
	int index = 0;
	for(int i=0;i<len;i++)
	{
		if(i==0)
		{
			if(arr[i]==arr[i+1])
			continue;
			else
			output[index++]=arr[i];
		}
		else if(i==len-1)
		{
			if(arr[i]==arr[i-1])
			{
				continue;
			}
			else
			output[index++]=arr[i];
		}
		else
		{
			if(arr[i]==arr[i-1] || arr[i]==arr[i-1])
			{
				continue;
			}
			else
			{
				output[index++]=arr[i];
			} 	
		}
	}
	for(int i=0;i<index;i++)
	{
		cout << output[i] << " ";
	}
}

int main()
{
	int ar[] = {1,1,2,2,3,4,5,5};
	printUnique(ar);
	
	return 0;
}
