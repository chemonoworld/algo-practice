#include <iostream>
#include <stack>

using namespace std;

int main()
{
	unsigned int count;
	cin >> count;
	unsigned int buffer;
	stack<unsigned int> stk;
	for (size_t i = 0; i < count; i++)
	{
		cin >> buffer;
		if (buffer == 0)
		{
			stk.pop();
		}
		else
		{
			stk.push(buffer);
		}
	}
	unsigned int result = 0;
	while (!stk.empty())
	{
		unsigned int pop = stk.top();
		stk.pop();
		result += pop;
	}
	cout << result;
	return 0;
}
