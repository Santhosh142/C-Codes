/*
Sort an array in such a way that all even numbers should be first and then odd numbers

Input:
7
1 2 3 4 5 7 10

Output:
2 4 10 1 3 5 7

*/
#include<bits/stdc++.h>
using namespace std;

bool condition(int x,int y)
{
	if(x%3==0 and y%3!=0) return true;
	
}
int main()
{
	int n;
	cin >> n;
	int ar[n];
	for(int i=0;i<n;i++)
	cin >> ar[i];
	
	sort(ar,ar+n,condition);
	
	cout << "Array after sorting" << endl;
	for(int i=0;i<n;i++)
	cout << ar[i] << " ";
	
	return 0;
}












