/*
PROBLEM STATEMENT:
Implement a queue using arrays

1 -> enqueue
2 -> dequeue
3 -> size
4 -> isEmpty


*/
#include<bits/stdc++.h>
using namespace std;
int front=-1;
int rear=-1;

void enqueue(int queue[],int ele)
{
	if(front==-1)
	front=0;
	queue[++rear]=ele;
}
int dequeue(int queue[])
{
	int ele = queue[front];
	front++;
	return ele;
}
int size(int queue[])
{
	return rear-front+1;
}
void isEmpty(int queue[])
{
	if(front>rear)
	cout << "queue is empty " ;
	else
	cout << "queue is not empty ";
}
void printQueue(int ar[])
{
	for(int i=front;i<=rear;i++)
	cout << ar[i] << " " ;
	cout << endl;
}

int main()
{
	int capacity;
	cin >> capacity;
	
	int queue[capacity];
	
	int x;
	cin >> x;
	do
	{
		cout << "1.enqueue " << endl;
		cout << "2.dequeue " << endl;
		cout << "3.size " << endl;
		cout << "4 isEmpty " << endl;
		
		switch(x)
		{
			case 1:
				cout << "enter element to push " << endl;
				int ele;
				cin >> ele;
				enqueue(queue,ele);
				break;
		
			case 2:
				ele = dequeue(queue);
				cout << "deleted element is " << ele << endl;
				break;
				
			case 3:
				int sz = size(queue);
				cout << "size of queue is " << sz << endl;
				break;
				
			case 4:
				isEmpty(queue);
				break;
				
			case 5:
				printQueue(queue);
				break;
		}	
	}
	while(x<5);
	return 0;
}



