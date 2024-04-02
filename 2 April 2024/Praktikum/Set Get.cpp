#include <iostream>
using namespace std;

class hitung{
	private:
		int a,b,tambah,kurang,kali;
		string bagi;
	public:
		void set(int c, int d){
			a=c;
			b=d;
			
			tambah = c + d;
			kurang = c - d;
			kali = c * d;
			
			
		}
		
		int gettambah(){
			return tambah;
		}
		int getkurang(){
			return kurang;
		}
		
		int getkali(){
			return kali;
		}
		
		double getbagi(){
			if(b==0){
//				bagi="error";
				cout<<"error";
			}else{
		 	return a/b;
		}
		
	}
};
int main(){
	int a,b;
	hitung apa;
	
	cout << "Masukan Angka Pertama: ";
	cin >> a;
	cout << "Masukan Angka Kedua: ";
	cin >> b;
	apa.set(a,b);
	cout<<"hasil penambahan "<<apa.gettambah();
	cout<<"\nhasil pengurangan "<<apa.getkurang();
	cout<<"\nhasil perkalian "<<apa.getkali();
	cout<<"\nhasil pembagian "<<apa.getbagi();
}
