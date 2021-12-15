/*
PROBLEM STATEMENT

Write a program in C++ to find transpose of a given matrix

Input:
1 2
3 4
Output:
1 3
2 4


*/
#include<iostream>

using namespace std;

void transpose(int arr[],int row,int col)
{
	for(int i=0;i<col;i++)
	{
		for(int j=0;j<row;j++)
		{
			cout << arr[j][i]<<" ";
		}
		cout << endl;
	}
	return 0;
}
void sumOfLeftDiagonal(int arr[],int row,int col)
{
	int sum = 0;
	for(int i=0;i<col;i++)
	{
		for(int j=0;j<row;j++)
		{
			sum+=arr[i][j];
		}
	}
	cout << sum;
	return 0;
}

int main()
{
	int row,col;
	row=3;
	col=3;
	int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	
	cout << "transpose of a matrix is " << endl;
	transpose(arr,row,col);
	cout << endl;
	cout << "Sum of left diagonals" << endl;
	sumOfLeftDiagonal(arr,row,col);
	cout << endl;
	
}
