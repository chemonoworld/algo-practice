#include <iostream>

using namespace std;

int main_1018()
{
	int row_n;// 가로 줄 개수, 앞 row 개수
	int col_n;// 세로 줄 개수, 뒤 col 개수
	cin >> row_n >> col_n;
	char** arr = new char* [row_n];
	for (size_t i = 0; i < row_n; i++)
	{
		arr[i] = new char[col_n];
	}
	for (size_t i = 0; i < row_n; i++)
	{
		for (size_t j = 0; j < col_n; j++) {
			cin >> arr[i][j];
		}
	}

	int min = row_n * col_n;
	for (size_t i = 0; i < row_n; i++)
	{
		for (size_t j = 0; j < col_n; j++) 
		{
			if (i + 7 < row_n && j + 7 < col_n)
			{
			int temp = 0;
			int temp2 = 0;
				for (size_t _i = i; _i < i + 8; _i++)
				{
					for (size_t _j = j; _j < j + 8; _j++)
					{
						if ((_i + _j) % 2 == 0) 
						{
							if (arr[_i][_j] == 'B') { temp++; }
							else { temp2++; }
						}
						else 
						{
							if (arr[_i][_j] == 'W') { temp++; }
							else { temp2++; }
						}

					}
				}
				if (temp < min) min = temp;
				if (temp2 < min) min = temp2;
			}
		}
	}
	cout << min << endl;

	for (size_t i = 0; i < row_n; i++)
	{
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}
