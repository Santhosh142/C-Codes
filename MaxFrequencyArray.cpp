#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	
	int max_frequency=0;
	int ele=arr[0];
	for(int i =0;i<n;i++)
	{
		int count=0;
		for(int j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		if(count>max_frequency)
		{
			max_frequency=count;
			ele=arr[i];
		}
			
	}
	cout << "Most occurred element in the array is " << ele << " i.e " << max_frequency<<" times";
	return 0;
}
