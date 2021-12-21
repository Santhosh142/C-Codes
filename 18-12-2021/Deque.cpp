//DEQUE

#include<bits/stdc++.h>

using namespace std;

int main()
{
	deque<int> dq;
	dq.push_back(3);
	dq.push_front(2);
	dq.push_back(5);
	dq.push_front(6);
	cout << dq.front() << endl;
	dq.pop_front();
	cout << dq.front() << endl;
	dq.pop_back();
	cout << dq.back() << endl;
	
	return 0;
}
