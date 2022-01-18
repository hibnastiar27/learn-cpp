#include <iostream>
using namespace std;

int main()
{
	// While
	int a = 1;
	while (a <= 10)
	{
		cout << a << endl;
		a++;
	}
	cout << endl;
	cout << endl;

	// Do While
	int b = 2;
	do
	{
		cout << b << endl;
		b += 2;
	} while (b <= 10);

	return 0;
}
