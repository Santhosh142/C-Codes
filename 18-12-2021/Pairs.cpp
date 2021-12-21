//PAIRS

#include<bits/stdc++.h>
using namespace std;

int main()
{
	pair<int,int> p;
	int n;
	cin >> n;
	
	
	//First way
// 	cin >>p.first;
// 	cin >> p.second;
	
	//Second way
	int x =5;
	int y=2;
	p=make_pair(x,y);
	
	//Third way
	
	vector<pair<int,int>> v;
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin >> x >> y;
		v.push_back(make_pair(x,y));
	}
	for(int i=0;i<n;i++)
	{
	    cout << v[i].first << " " << v[i].second << endl;
	}
	
	cout << v.size();
	return 0;
}
