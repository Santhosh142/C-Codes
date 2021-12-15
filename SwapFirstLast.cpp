/*
PROBLEM STATEMENT:
Given two numbers N1 and N2 the task is to swap the first digit of the first number with the last digit of the second number
and last digit of the first number with the first digit of the second number

Input :
N1 ="1234", N2 ="5678";

Output:
8235 4671


*/

#include<iostream>
#include<string>

using namespace std;

int main()
{
	string n1,n2;
	cin >> n1;
	cin >> n2;
	int len1=n1.size();
	int len2=n2.size();
	
	
	//Second Approach;
	swap(n1[0],n2[len2-1]);
	swap(n1[len1-1],n2[0]);
	
	//First Approach
//	char ff=n1[0];
//	char fl=n1[len1-1];
//	char sf=n2[0];
//	char sl=n2[len2-1];
//	n1[0]=sl;
//	n1[len1-1]=sf;
//	n2[0]=fl;
//	n2[len2-1]=ff;
	cout << n1 << " ";
	cout << n2 << endl;
	
	return 0;
}
