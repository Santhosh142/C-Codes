//SELECTION SORT

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int ar[n];
	
	for(int i=0;i<n;i++)
	cin >> ar[i];
	
	cout << "Array before sorting" << endl;
	for(int i=0;i<n;i++)
	cout << ar[i] << " ";
	cout << endl;
	
	for(int i=0;i<n;i++)
	{
		int m=i;
		for(int j=i;j<n;j++)
		{
			if(ar[j]<ar[m])
			m=j;
		}
		swap(ar[i],ar[m]);
		
	}
	
	cout << "Array After sorting" << endl;
	for(int i=0;i<n;i++)
	cout << ar[i] << " ";
	cout << endl;
	return 0;
}
