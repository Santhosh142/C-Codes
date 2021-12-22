/*
PROBLEM STATEMENT:
Given an array and task is to sort it. But for sorting there is a criteria that sort the odd
elements in descending order and place in forst half and for the second half sort the even elements in ascending order.

Input:
The first line of input contains an integer N denoting the size of the array. The next line contains
N space separated values of array

Output:
print the space separated values of the modified array.

Constraints:
1 <= N  <=10^7
0 <= Ai <= 10^18

Input:
7
1 2 3 4 5 7 10

Output:
7 5 3 1 2 4 10




*/
#include<bits/stdc++.h>
using namespace std;

bool condition(int x,int y)
{
	if(x%2!=0 and y%2==0) return true;
	else if(x%2==0 and y%2!=0) return false;
	else if(x%2==0 and y%2==0)
	{
		if(x<y) return true;
		else return false;
	}
	else if(x%2!=0 and y%2!=0)
	{
		if(x>y) return true;
		else return false;
	}
}
int main()
{
	int n;
	cin >>n;
	int ar[n];
	
	for(int i=0;i<n;i++)
	cin >> ar[i];
	cout << "Array before sorting" << endl;
	for(int i=0;i<n;i++)
	cout << ar[i] << " ";
	cout << endl;
	
	sort(ar,ar+n,condition);
	
	cout << "Array after sorting" << endl;
	for(int i=0;i<n;i++)
	cout << ar[i] << " ";
	
	return 0;
}




