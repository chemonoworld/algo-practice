#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class MyStack {
private:
	int* stack;
	unsigned int size;
	unsigned int maxSize;

public:
	MyStack(unsigned int _maxSize)
		: size(0), maxSize(_maxSize)
	{
		stack = new int[maxSize];
	}
	~MyStack()
	{
		delete[] stack;
	}

	unsigned int getSize()
	{
		return size;
	};
	
	void push(int input)
	{
		if (size == maxSize) return;
		stack[size] = input;
		size++;
	}

	int pop() 
	{
		if (size == 0) return -1;
		size--;
		return stack[size];
	}
	
	int top()
	{
		if (size == 0) return -1;
		return stack[size - 1];
	}

	unsigned int empty()
	{
		if (size == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}

};


int main()
{
	unsigned int orderCount;
	cin >> orderCount;
	
	string buffer;
	MyStack* myStack = new MyStack(orderCount);
	getline(cin, buffer); // new line
	for (size_t i = 0; i < orderCount; i++)
	{
		getline(cin, buffer);
		if (buffer.find("top") != string::npos)
		{
			cout << myStack->top() << endl;
		}
		else if (buffer.find("pop") != string::npos)
		{
			cout << myStack->pop() << endl;
		}
		else if (buffer.find("push") != string::npos)
		{
			string input = buffer.substr(5);
			myStack->push(std::stoi(input));
		}
		else if (buffer.find("size") != string::npos)
		{
			cout << myStack->getSize() << endl;
		}
		else if (buffer.find("empty") != string::npos)
		{
			cout << myStack->empty() << endl;
		}
		else
		{
			cout << "command not found" << endl;
		}
	}
	delete myStack;
	return 0;
}
