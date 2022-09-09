#include <iostream>

using namespace std;

int FlipString()
{
	int length;
	cin >> length;
	char* c_str = new char[length + 1];
	for (size_t i = 0; i < length; i++)
	{
		cin >> c_str[i];
	}
	c_str[length] = '\0';


	// flip
	char* p = c_str;
	char* q = c_str + length - 1;
	while (p < q) {
		char temp = *p;
		*p = *q;
		*q = temp;
		++p;
		--q;
	}
	for (size_t i = 0; i < length; i++)
	{
		cout << c_str[i];
	}
	return 0;
}
