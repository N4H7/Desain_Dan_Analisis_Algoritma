#include <iostream>
#include <string>
using namespace std;

struct Barang{
	char daftarBarang[30];
	barang;
};

int main(){
	int i,n=5;
	bool ketemu;
	
	// array dari struktur barang
	Barang daftarBarang[5][5] = {
	{"Buku", 5000},
	{"Pensil", 100},
	{"Pulpen", 2000},
    {"Penghapus", 500},
	{"Penggaris", 500}};
	
	cout << "!!Daftar Barang Toko Foto Copy Jaya Gemilang!!";
	for (i=0; i<n; i++){
		cout << daftarBarang[i] << endl;
	}
	
//
//	cout << "\n\nMasukkan Barang yang akan dicari = ";
//	cin >> barang;
//	
////	melakukan pencarian
//	for (i=0; i<n; i++){
//		if (daftarBarang[i] == barang){
//			ketemu = true;
//			Posisi[jmlh] = i;
//			jmlh;
//		}
//	}
//	
//	if(ketemu){
//		cout << "Barang " << barang << " ditemukan dalam daftar barang yang tersedia" << endl;
//	
//		for (i=0; i<n; i++){
//			cout << Posisi[i] << " ";
//		}
//	}
//	
//	else{
//		cout << "Maaf, barang bernama " << barang << " tidak ditemukan dalam daftar barang yang tersedi";
//	}
//	
//	getchar(); // Menunggu masukan sebelum menutup program
	return 0; // Proggram selesai dengan baik dan tertib
	
}
