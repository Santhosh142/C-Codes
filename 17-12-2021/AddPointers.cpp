/*
PROBLEM STATEMENT:
Write a program in C++ to add two numbers using pointers
Input Data :
Input the first number : 5
Input the Second number : 6

Expected output:
Sum of two numbers :11

*/
#include<iostream>
using namespace std;

int main()
{
	int *ptr1,*ptr2,num1,num2;
	cout << "enter first number " << endl;
	cin >> num1;
	cout << "enter second number " << endl;
	cin >> num2;
	ptr1=&num1;
	ptr2=&num2;
	cout << *ptr1+*ptr2;
	
	
	return 0;
}
















