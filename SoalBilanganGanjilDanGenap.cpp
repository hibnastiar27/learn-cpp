#include <iostream>
using namespace std;

int main(){
	//bilangan ganjil dan genap
	cout<<"Program Cek Bilangan Ganjil atau Genap \n";
	
	int nilai;
	cout<<"Masukan Nilai ";cin>>nilai;
	if(nilai%2==0){//jika nilai tsb habis dibagi 2
		cout<<"Genap";
	}else if(nilai%2!=0){//jika nilai tsb tidak habis dibagi 2
		cout<<"Ganjil";
	}
	cout<<endl<<endl;
	
	
	//for bilangan ganjil,genap
	int bil, a;
	cout<<"Batasan Nilai ";cin>>a;
	for(int i=1;i<=a;i++){
		cout<<"Masukan Nilai ";cin>>bil;
			if(bil%2==0){
				cout<<"Genap"<<endl<<endl;
			}else{
				cout<<"Ganjil"<<endl<<endl;
			}
	}
	
	//mencetak bil genap 1 -> batasan inputan user
	int b;
	cout<<"Batasan Nilai ";cin>>b;
	for(int i=1;i<=b;i++){
		if(i%2==0){
			cout<<i<<" ";
		}		
	}
	
	//mencetak bil ganjil 1 -> batasan inputan user
	int b;
	cout<<"Batasan Nilai ";cin>>b;
	for(int i=1;i<=b;i++){
		if(i%2==1){
			cout<<i<<" ";
		}		
	}
	
}
