#include <iostream>
using namespace std;

int main(){
	//Deklarasi array untuk menyimpan bilangan dan pososinya
	int Nilai[20];
	int Posisi[20];
	int i,n,bil,jmlh=0;
	bool ketemu;
	
	cout << "Masukan Jumlah Deret Bilangan = ";
	cin >> n;
	cout << endl;
	
	//membaca elemen array
	for (i=0; i<n; i++){
		cout << "Nilai Bilangan ke- " << i << " = ";
		cin >> Nilai[i];
	}
	
	//mencetak elemen array
	cout << "\n\Deret Bilangan = ";
	for (i=0; i<n; i++){
		cout << Nilai[i] << " ";
	}
	
	cout << "\n\nMasukkan Bilangan yang akan dicari = ";
	cin >> bil;
	
	//melakukan pencarian
	for (i=0; i<n; i++){
		if (Nilai[i] == bil){
			ketemu = true;
			Posisi[jmlh] = i;
			jmlh;
		}
	}
	
	if(ketemu){
		cout << "Bilangan     " << bil << "   ditemukan sebanyak " << jmlh;
		cout << "\npada posisi ke = ";
		for (i=0; i<n; i++){
			cout << Posisi[i] << " ";
		}
	}
	
	else{
		cout << " Maaf, bilangan " << bil << " tidak ditemukan!!";
	}
	
	getchar(); // Menunggu masukan sebelum menutup program
	return 0; // Proggram selesai dengan baik dan tertib
}
