/*
PROBLEM STATEMENT:
Write a program in c++ to change the upper trianular of a given matrix to 0's

TestData:
input elements in the matrix
element[0][0]:1
element[0][1]:2
element[0][2]:3
element[1][0]:4
element[1][1]:5
element[1][2]:6
element[2][0]:7
element[2][1]:8
element[2][2]:9

*/

#include<iostream>
using namespace std;


int main()
{
	int row,col;
	cin >> row;
	cin >> col;
	
	int arr[row][col];
	int ele=1;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			arr[i][j]=ele++;
		}
	}
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(j>i)
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

