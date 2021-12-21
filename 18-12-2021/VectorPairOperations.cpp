/*
implement different operations on vector of pairs

Input:
The first line of input contains an integer t denoting the no of qqueries. Then in the next line are t space separated queries.

A query can be of four types:
1. s x y( Adds a pair with values(x,y) and string s to the vector A at the end)
2.(returns the size of the vector A)
3.(prints space separated values of each element of the vector of pairs A)
4.(Sorts the pair's array with respect to the values x,y in ascending order)


*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int x,y;
	vector<pair< pair<int,int> ,string> >v;
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cout<<"1.Add a pair " << endl;
		cout << "2.returns the size" << endl;
		cout << "3.print Pairs" << endl;
		cout << "4.sort array with respect to first and second in ascending array" << endl;
		int x;
		cin >>x;
		switch(x)
		{
			case 1:
				
				cin >> s >> x >> y;
				v.push_back(make_pair(make_pair(x,y),s));
				break;
			case 2:
				cout << v.size()<< endl;
				break;
			case 3:
				for(auto u : v)
				{
					cout << u.second << " " << u.first.first << " " << u.first.second << endl ;
				}
				break;
			case 4:
				sort(v.begin(),v.end());
				break;
				
		}
		
	}
	
	return 0;
}














