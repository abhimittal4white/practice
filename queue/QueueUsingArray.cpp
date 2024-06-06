#include<iostream>
using namespace std;
int queue[9999];
int f = -1; 
int r = -1;
int n;

void enqueue(int item)
{
	if(r==n-1)
	{
		cout << "queue overflow!!" << endl;
		return;
	}
	if(f==-1 && r==-1)
	{
		f = 0;
		r = 0;
		queue[r]=item;
	}
	else
	{
		queue[++r] = item;
	}
}

void peek()
{
	if(f==-1 && r==-1)
	{
		cout << "Queue is empty!!"<< endl;
	}
	else
	{
		cout << "Element at front is: " << queue[f] << endl;
	}
}

void dequeue()
{
	if(f == -1 && r == -1)
	{
		cout << "Queue underflow!!";
	}
	else if(f==r)
	{
		cout << "Deleted element is: " << queue[f] << endl;
		f = -1;
		r = -1;
	}
	else
	{
		cout << "Deleted element is: "<<queue[f] << endl;
		f++;	
	}
}

int main()
{
	int comm, item;
	cout << "Enter the size of the queue: ";
	cin >> n;
	
	do
    {
    	cout << "\n1. enqueue" << endl;
	    cout << "2. dequeue" << endl;
	    cout << "3. Peek" << endl;
	    cout << "4. Exit" << endl;
    	cout << "Enter a command: ";
	    cin >> comm;
	    
    	switch(comm)
    	{
    		case 1: cout << "Enter item to be inserted: ";
    				cin >> item;
					enqueue(item);
					break;
			case 2: dequeue();
					break;
			case 3: peek();
					break;
			case 4: return 0;
			default: cout << "invalid input";
		}
		cout << "queue: ";
		
		if(f!=-1)
		{
			for(int i = f; i<=r; i++)
		    {
		    	cout << queue[i] << " ";
			}
			cout << "\n";
		}	
	}while(true);
	
  	return 0;
}
