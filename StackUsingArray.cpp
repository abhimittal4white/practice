#include <iostream>
using namespace std;
int stack[9999];
int top = -1;
int n;

void push(int item)
{
	if(top == n-1)
	{
		cout << "stack overflow!!" << endl;
		return;
	}
	top++;
	stack[top] = item;
}

void peek()
{
	if(top==-1)
	{
		cout << "Stack empty!!\n";
	}
	else
	{
		cout << "Element at top: " << stack[top] << endl;
	}
}

void pop()
{
	if(top == -1)
	{
		cout << "stack Underflow!!"<< endl;
		return;
	}
	int item = stack[top];
	top--;
	cout << "Popped element is: " << item << endl; 
}


int main()
{
	int comm, item;
	cout << "Enter the size of the stack: ";
	cin >> n;
    
    do
    {
    	cout << "1. Push" << endl;
	    cout << "2. Pop" << endl;
	    cout << "3. Peek" << endl;
	    cout << "4. Exit" << endl;
    	cout << "Enter a command: ";
	    cin >> comm;
	    
    	switch(comm)
    	{
    		case 1: cout << "Enter item to be inserted: ";
    				cin >> item;
					push(item);
					break;
			case 2: pop();
					break;
			case 3: peek();
					break;
			case 4: return 0;
			default: cout << "invalid input";
		}
		
		cout << "stack: ";
		for(int i = 0; i<=top; i++)
	    {
	    	cout << stack[i] << " ";
		}
		cout << "\n\n";	
		
	}while(true);
	
  	return 0;
}
