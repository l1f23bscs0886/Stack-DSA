#include "Stack.h"

class myStack :public Stack
{
public:
	void push(int value);
	int pop();
	int top();
	myStack(int s);
	void display();
	bool isEmpty();
	bool isFull();
};

bool myStack::isFull()
{
	return currentSize == maxSize;
}

bool myStack::isEmpty()
{
	return currentSize == 0;
}

void myStack::display()
{
	cout << "Max Size = " << maxSize << endl;
	cout << "Current Size = " << currentSize << endl;

	for (int i = 0; i < currentSize; i++)
	{
		cout << i << ". " << arr[i] << endl;
	}
}

myStack::myStack(int s) :Stack(s)
{
}

void myStack::push(int value)
{
	if (isFull())
	{
		cout << "Stack is Full" << endl;
	}
	else
	{
		arr[currentSize] = value;
		currentSize++;
	}

}

int myStack::top()
{
	if (isEmpty())
	{
		cout << "Stack in Empty" << endl;
		return NULL;
	}

	else
	{
		return arr[currentSize - 1];
	}
}


int myStack::pop()
{
	if (isEmpty())
	{
		cout << "Stack in Empty" << endl;
		return NULL;
	}

	else
	{
		currentSize--;
		return arr[currentSize];
	}
}