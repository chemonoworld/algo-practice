#include <iostream>
#include <stack>

using namespace std;

int main()
{
	unsigned int count;
	cin >> count;
	int buffer;
	stack<int> stk = stack<int>();
	int* arr = new int[count];
	int* nge = new int[count];
	for (size_t i = 0; i < count; i++)
	{
		nge[i] = -1;
		cin >> buffer;
		arr[i] = buffer;
	}
	stk.push(arr[count - 1]);
	for (int i = count - 2; i >= 0; i--)
	{
			while (!stk.empty() && arr[i] >= stk.top())
			{
				stk.pop();
			}
			nge[i] = stk.empty() ? -1 : stk.top();
			stk.push(arr[i]);
	}
	for (size_t i = 0; i < count; i++) cout << nge[i] << " ";
	delete[] arr;
	delete[] nge;
	return 0;
}
