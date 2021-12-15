/*
PROBLEM STATEMENT

sort the array which contains elements of zero's and one's only

inputArray=[1,0,0,0,1,0,1,0,1,1]
outputArray=[0,0,0,0,0,1,1,1,1]

*/


#include<iostream>
using namespace std;

void approach1(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

void approach2(int arr[],int n)
{
	int low =0;
	int high = n-1;
	while(low<=high)
	{
		if(arr[low]==1 && arr[high]==0)
		{
			int temp = arr[low];
			arr[low]=arr[high];
			arr[high]=temp;
			low++;
			high--;
		}
		else if(arr[high]==1)
		{
			high--;
		}
		else if(arr[low]==0)
		{
			low++;
		}
		
	}
	for(int i=0;i<n;i++)
	{
		cout <<arr[i]<< " ";
	}
}


int main()
{
	int n;
	cin>>n;
	
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout << "First Approach for sorting "<<endl;
	approach1(arr,n);
	
	cout<<endl;
	cout<<"Another approach for "<<endl;
	approach2(arr,n);
	return 0;
}
