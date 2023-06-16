#include <iostream>
#include <string>
using namespace std;

class StackArray {
private:
	int stack_array[5];
	int top;


public:
	//constructor
	StackArray() {
		top = -1;
	}

	int push(int element) {
		if (top == 4) {
			cout << "Number of data exceeds the limit." << endl;
			return 0;
		}

		top++;
		stack_array[top] = element;		//step3
		cout << endl;
		cout << element << "ditambahkan (pushed)" << endl;

		return element;
	}

	void pop() {
		if (empety()) {	//step 1
			cout << "\nStack is empety. Cannot pop." << endl;
			return; //1.b
		}
		cout << "\n the popped element is:" << stack_array[top] << endl;		//step 2
		top--; //step 3 decrement

	}

	//method for ch
};
