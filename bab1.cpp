#include <iostream>
// include= memasukan -> library 'iostream' kedalam program kita
// library iostream = header yang digunakan untuk fungsi input dan output

// terdapat 2 macam konstanta, (const nama=nilai) dan (#define nama_variabel nilai)
const float phi = 3.14;
#define y 123.10

using namespace std;
// using digunakan untuk memperkenalkan suatu namespace, disini menggunakan std
// std = digunakan untuk pengganti scope operator sebelum menuliskan cin dan cout
// std::cout<<"Scope Operator";

int main()
{
	//	tempat kode blok ditulis
	int x;
	cout << "GOKIL \n"; // cout digunakan untuk mencetak / menampilkan sesuatu di layar(variabel, fungsi, dan juga kalimat sederhana)
	cout << "Masukan Angka Favoritmu : ";
	cin >> x;
	cout << "Cetak Phi " << phi << endl;
	cout << "Cetak y " << y;
	cout << "Penambahan " << y+10*12;
	return 0; // digunakan untuk mengakhiri fungsi main.
}

//	ini merupakan komen 1 baris
/*
	ini merupakan komen berbaris baris
	baris kedua
	baris ketiga
*/
