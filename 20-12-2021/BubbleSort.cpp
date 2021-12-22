//BUBBLE SORT
#include <bits/stdc++.h>
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
		for(int j=0;j<n-i-1;j++)
		{
			if(ar[j]>ar[j+1])
			{
				int temp=ar[j];
				ar[j]=ar[j+1];
				ar[j+1]=temp;
			}
		}
	}
	
	cout << "Array after sorting " << endl;
	for(int i=0;i<n;i++)
	cout << ar[i] << " ";
	return 0;
}
















