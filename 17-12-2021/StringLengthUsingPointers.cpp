/*
Write a program in C++ to calculate the length of the string using a pointer

Test Data :
"Talentio"

Expected Output :
The length of the given string Talentio is : 8

*/
#include<iostream>

#include<bits/stdc++.h>

using namespace std;

int main()
{
	char str[] = "Hello World";
	char *ptr ;
	ptr=str;
	int len =0;
	while(*ptr != '\0')
	{
		len++;
		ptr++;
	}
	cout << len ;
	return 0;
}

















