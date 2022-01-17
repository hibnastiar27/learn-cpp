#include <iostream>
using namespace std;

int main(){
	char nilai;
	cout<<"Masukan Simbol Nilai [A,B,C,D] ";cin>>nilai;
	
	cout<<"Anda ";
	switch (nilai)
	{
		case 'A' :
			cout<<"Kompor Gas!!!";
			break;
		case 'B':
			cout<<"Keren!!!";
			break;
		case 'C':
			cout<<"Mantap!!!";
			break;
		default :
			cout<<"Goblok!!!";
	}
	cout<<" Karena Nilai Anda Adalah "<<nilai<<endl;
	
	return 0;
}
