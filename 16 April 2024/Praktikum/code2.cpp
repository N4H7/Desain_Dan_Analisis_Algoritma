#include <iostream>
using namespace std;

class BangunDatar{
	protected:
		int lebar, tinggi;
		
	public:
		void setNilai(int a, int b){
		lebar = a;
		tinggi = b;
		}
};

class Persegipanjang: public BangunDatar{
	public:
	int getNilai(){
		return (lebar * tinggi);
	}
};

class Segitiga: public BangunDatar{
	public:
	int getNilai(){
		return (lebar * tinggi / 2);
	}
};

main(){
	Persegipanjang perpan;
	Segitiga segitiga;
	
	int a,b,c,d;
	
	cout << "!!Masukan Nilai untuk Persegi Panjang!!" << endl;
	cout << "Lebar: ";
	cin >> a;
	cout << "Tinggi: ";
	cin >> b;
	perpan.setNilai(a,b);
	
	segitiga.setNilai(10,5);
	
	cout << perpan.getNilai() << endl;
	cout << segitiga.getNilai() << endl;
	
	return 0;
}
