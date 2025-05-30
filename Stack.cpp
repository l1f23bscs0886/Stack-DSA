#include "myStack.h"

int main()
{
	myStack obj(5);
	obj.push(265);
	obj.push(-3);
	obj.push(1985);
	obj.push(91);
	obj.push(0);
	obj.push(6);

	cout << "Topped Value: " << obj.top() << endl << endl;


	cout << "int display()" << endl;
	obj.display();



	cout << endl << endl;
	myStack str(100);
	str.push(123);
	str.push(456);
	cout << "second stack display()" << endl;
	str.display();

	return 0;
}