#include<iostream>
using namespace std;
int queue[9999];
int f = -1;
int r = -1;
int n; 

void enqueue(int item)
{
	if(f==-1 && r==-1)
	{
		f=0;
		r=0;
		queue[r]=item;
	}
	else if((r+1)%n == f)
	{
		cout << "Queue Overflow!!" << endl;
		return;
	}
	else
	{
		r = (r+1)%n;
		queue[r] = item;
	}
}

void dequeue()
{
	if(f==-1 && r==-1)
	{
		cout << "Queue Underflow!!"<< endl;
	}
	else if(r==f)
	{
		cout << "Deleted item is: " << queue[f] << endl;
		f=-1;
		r=-1;
	}
	else
	{
		cout << "Deleted item is: " << queue[f] << endl;
		f = (f+1)%n;
	}
}

void peek()
{
	if(f==-1)
	{
		cout << "Queue is empty!"<<endl;
		return;
	}
	cout << "Element at front is: " << queue[f] << endl;
}

int main()
{
    int com,item;
    cout<<"enter size of queue";
    cin>>n;
    do
    {
        cout<<"\n 1.enqueue"<<endl;
        cout<<"2.dequeue" << endl;
        cout<<"3.peek" << endl;
        cout<<"4.exit" << endl;
        cout<<"enter a command";
        cin>>com;
    
	    switch(com)
	    {
	        case 1: cout<<"enter item to be inserted:";
	        		cin>>item;
					enqueue(item);
	        		break;
	        		
	        case 2: dequeue();
	        		break;
	        		
	        case 3: peek();
	        		break;
	        		
	        case 4: return 0;
	        
	        default:cout<<"invalid input" << endl;
	    }
    
	    cout<<"queue";
	    if(f!=-1)
	    {
	    	int x=f;
	        while(x!=r)
	        {
	        	cout << queue[x] << " ";
	        	x = (x+1)%n;
			}
			cout << queue[x];
	    }
	    cout<<"\n";
    }while(true);
    
    return 0;
}
