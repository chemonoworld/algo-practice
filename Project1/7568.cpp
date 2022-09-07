#include <iostream>

using namespace std;

int main_7568() 
{
	unsigned int totalNum;
	cin >> totalNum;
	size_t* arr = new size_t[2 * totalNum];
	size_t* cntArr = new size_t[totalNum];
	for (size_t i = 0; i < totalNum; i++)
	{
		cin >> arr[2 * i] >> arr[2 * i + 1];
		cntArr[i] = 1;
	}
	for (size_t i = 0; i < totalNum; i++)
	{
		for (size_t j = 0; j < totalNum; j++)
		{
				if (arr[2 * j] > arr[2 * i] && arr[2 * j + 1] > arr[2 * i + 1] && i != j)
				{
					cntArr[i]++;
				}
		}
	}
	for (size_t i = 0; i < totalNum; i++)
	{
		cout << cntArr[i] << " ";
	}
	delete[] arr;
	delete[] cntArr;
	return 0;
}

