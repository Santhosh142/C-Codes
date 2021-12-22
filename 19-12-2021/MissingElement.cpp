/*

Example 1:
A[] = {2,4,6,8,9,10,12}
B[] = {2,4,6,8,10,12};

output :
missing element is 9

*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a[n];
	int b[n];
	
	for(int i=0;i<n;i++)
	cin >> a[i];
	
	for(int i=0;i<n;i++)
	cin >> b[i];

	for(int i=0;i<n;i++)
	{
		if(a[i]!=b[i])
		{
			cout << a[i] << endl;
			return 0;
		}
	}
	
	return 0;
}
