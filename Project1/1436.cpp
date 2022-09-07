#include <iostream>

using namespace std;

int main1436()
{
	unsigned int n;
	cin >> n;
	unsigned int number = 0;
	unsigned int count = 0;
	while (++number) 
	{
		unsigned int temp = number;
		unsigned tempCount = 0;
		unsigned int arr[3] = { 0,0,0 };
		while (temp / 10 > 0) {
			arr[tempCount % 3] = temp % 10;
			if (arr[0] == 6 && arr[1] == 6 && arr[2] == 6)
			{
				count++;
				break;
			}
			temp /= 10;
			tempCount++;
			if (temp / 10 == 0)
			{
				arr[tempCount % 3] = temp % 10;
				if (arr[0] == 6 && arr[1] == 6 && arr[2] == 6)
				{
					count++;
					break;
				}
			}
		}
		if (count == n) break;
	}
	cout << number;
	return 0;
}
