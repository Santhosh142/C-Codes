/*
PROBLEM STATEMENT:
Sort elements by their frequency and index

Given an integer array, sort its element b their frequency and index i.e if two elements have different
frequencies, then the one whih has more frequency should come first; otherwise the one which has less index should come first

Input : [3,3,1,1,1,8,3,6,8,7,8]
Output : [3,3,3,1,1,1,8,8,8,6,7]


*/
#include <bits/stdc++.h>
using namespace std;
 
 
map<int,int> freq;
map<int,int> first_location;
 
bool condition(int a,int b)
{
	if(freq[a]>freq[b])
	return true;
	else if(freq[a]==freq[b])
	{
		if(first_location[a]<first_location[b])
		return true;
		else
		return false;
	}
	else
	return false;
 
}
 
 
 
int main() {
 
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	cin>>arr[i];
 
	for(int i=0;i<n;i++)
	freq[arr[i]]+=1;
 
	for(int i=0;i<n;i++)
	{
		if(first_location[arr[i]]==0)
		first_location[arr[i]]=i+1;
	}
 
	sort(arr, arr+n, condition);
 
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
 
 
	return 0;
}















