/*
Given an integer number n, return the difference between the product of its digits and the sum of its digits.
 

Example 1:

Input: n = 234
Output: 15 
Explanation: 
Product of digits = 2 * 3 * 4 = 24 
Sum of digits = 2 + 3 + 4 = 9 
Result = 24 - 9 = 15

*/

#include<iostream>
using namespace std;

int subtractProductAndSum(int n) 
{
    int temp = n;
    int product =1;
    int sum = 0;
    while(temp>0)
    {
        int rem = temp%10;
        product*=rem;
        sum+=rem;
        temp=temp/10;    
    }
    return product-sum;
}
    
int main()
{
	int n;
	cin >> n;
	int res;
	res = subtractProductAndSum(n);
	cout << res;
	return 0;
}
