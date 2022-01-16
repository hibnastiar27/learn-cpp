#include <iostream>
using namespace std;

int main()
{
	//if
	int nilai;
	cout<<"Masukan Nilai Algoritma ";cin>>nilai;
	if(nilai>=80){
		cout<<"Selamat Anda Lulus";
	}
	cout<<endl<<endl;
	
	//if else
	int nilai2;
	cout<<"Masukan Nilai Ipa ";cin>>nilai2;
	if(nilai2>=80){
		cout<<"Selamat Anda Lulus";
	}else{
		cout<<"Anda GOBLOK!!!";	
	}
	cout<<endl<<endl;
	
	//if else lebih dari satu kondisi
	/*
		A=80-100
		B=60-79
		C=0-59
	*/
	int nilai3;
	cout<<"Masukan Nilai B.Arab ";cin>>nilai3;
	if (nilai3>=80){
		cout<<"A";
	}else if (nilai3 >= 60){
		cout<<"B";
	}else {
		cout<<"C";
	}
	
	
	return 0;
}
