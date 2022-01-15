#include <iostream>
using namespace std;

int main()
{
	/*
		Variabel: merupakan nama tempat untuk menampung data.
		tipe data: merupakan jenis tempat yang ingin digunakan, antara lain:
			char, character -> huruf yang bisa di matematikakan
			string, kalimat yang panjang tidak bisa di matematikakan
			int, integer -> angka bilangan bulat
			float, bilangan koma koma an ~7 digit
			double, bilangan koma koma an ~15 digit
		Penulisan:
			int nama_variabel = nilai ; 
	*/
	
	char karakter = 'A';
	int panjang = 2;
	int lebar = 4;
	float phi;
	bool a;
	
	int luas;
	luas=panjang * lebar;
	cout<<panjang<<" x "<<lebar<<" = "<<luas;
	return 0;
}
