#include <iostream>
#include <string>
#include <sstream>

// 주의 해야할 점
// getline 처음에 \n 입력 받더라.. cin buffer에 남아있어서 그런가?
// 맞는 듯 그래서 cin.ignore로 버퍼 flush 해줌

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


int main10282()
{
	unsigned int orderCount;
	cin >> orderCount;
	
	string buffer;
	MyStack* myStack = new MyStack(orderCount);
	cin.ignore();
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
