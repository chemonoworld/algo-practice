#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int* arr = new int[n];
	for (size_t i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = i + 1; j < n; j++)
		{
			if (arr[i] > arr[j])
			{
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}
