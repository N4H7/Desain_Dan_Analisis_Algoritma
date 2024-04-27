#include <iostream>
#include <string>
using namespace std;

struct barang{
	string barang;
	int harga;
};

int search(const barang daftar[], string brg){
	for (int i=0; i<5; i++){
		if(daftar[i].barang==brg){
			return i;
		}
	}
	return -1;
}

int main(){
	string brg;
	bool ketemu = false;
	
	barang daftar[5]{
	{"buku",5000},
	{"pensil",1000},
	{"pulpen",2000},
	{"penghapus",500},
	{"penggaris",1500}
	};
	
	cout << "Masukan barang yang ingin dicari : ";
	cin >> brg;
	int a = search(daftar,brg);
	
		if(a!= -1){
			cout << "barang "<<daftar[a].barang<<" ditemukan dengan harga "<<daftar[a].harga;
		}else{
			cout << "Maaf barang " << brg << " tidak ditemukan didalam barang";
		}
	
	
	return 0;
}
