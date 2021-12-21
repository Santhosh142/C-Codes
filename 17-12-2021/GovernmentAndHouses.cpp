/*
There are N Homeless people in the community and N houses in the community, It will be given in the arrray(people),
heights of the persons and in the array house capacity of the houses is given 

Government decided togive homes for people on the basis of following conditions:
*Priority is given for the peope from left to right of the array 
*Each person is allotted to a house if and only if the capacity of house is greater than or equal to person hight

Input:
3
3 8 5
1 9 4
Output:
2

Explaination:
people=3,8,5 house=1,9,4 people0=3 can fit in 9 which is nearest from left in array house people1 = 8 cannot fit in any home 
which is left(i.e 1 and 4) people2=5 cannot fit in any home home which is left(i.e 1 and 4) So return 2, which is number of homeless people

*/
#include<iostream>
#include<string>
using namespace std;


int main()
{
	int n;
	cin >> n;
	int person[n];
	int house[n];
	for(int i=0;i<n;i++)
	{
		cin >> person[i];
	}
	for(int i=0;i<n;i++)
	cin >> house[i];
	int count = 0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(house[i]==-1)
			{
				continue;
			}
			if(person[i]<=house[j])
			{
				house[i]=-1;
				count++;
				break;
			}
		}
	}
	cout << count;
	
	return 0;
}
