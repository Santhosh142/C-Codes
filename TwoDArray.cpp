/*
Write a program in c++ for a 2D array of size 3x3 and print the matrix

TestData:
input elements in the matrix
element[0][0]:0
element[0][1]:1
element[0][2]:2
element[1][0]:3
element[1][1]:4
element[1][2]:5
element[2][0]:6
element[2][1]:7
element[2][2]:8
*/

#include<iostream>

using namespace std;

int main()
{
	int row,col;
	cin >> row;
	cin >> col;
	int ele = 0;
	int arr[row][col];
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			arr[i][j]=ele;
			ele++;
		}
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
