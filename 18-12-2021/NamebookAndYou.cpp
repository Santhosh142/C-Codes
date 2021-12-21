//NamebookAndYou

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	map<string,int> m;
	for(int i=0;i<n;i++)
	{
		string ch;
		cin >> ch;
		if(m.find(ch) != m.end())
		{
			int a=m[ch];
			a+=1;
			m[ch]=a;
			string st = to_string(a);
			cout << ch <<st << endl;
		}
		else
		{
			cout << "Ok" << endl;
			m[ch]=0;
		}
	}
	return 0;
}
