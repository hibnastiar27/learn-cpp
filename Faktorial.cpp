#include <iostream>
using namespace std;

int main()
{
	// faktorialW
	// 5! = 5*4*3*2*1
	int bil, hasil = 1;
	cout << "Masukan Nilai Faktorial ";
	cin >> bil;
	for (int i = bil; i >= 1; i--)
	{
		hasil *= i;
		cout << hasil << " ";
	}
	cout << endl;

	cout << bil << "! = " << hasil;
}