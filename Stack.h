#include <iostream>
#include <string>
using namespace std;

class Stack
{
protected:
	int* arr;
	int maxSize;
	int currentSize;
public:
	virtual void push(int value) = 0;
	virtual int pop() = 0;
	Stack(int size);
	virtual bool isEmpty() = 0;
	virtual bool isFull() = 0;
	virtual int top() = 0;
};

Stack::Stack(int size)
{
	maxSize = size;
	currentSize = 0;
	arr = new int[size];
}