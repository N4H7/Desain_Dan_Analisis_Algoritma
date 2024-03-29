#include <iostream> // untuk Menggunakan library iostream
using namespace std; // untuk menghilangkan std::

class contoh { // class yang memiliki nama contoh
	private: // spesifik access, dalam kasus ini yang dalam private hanya dapat dilihat oleh administrator
		int nilai; //variabel nilai merupakan integer
	
	public: // Spesifik access, dalam kasus ini yang dalam public dapat diakses dari luar kelas
		contoh (int n) { // ini adalah konstruktor untuk kelas yaitu contoh dan menggunakan integer variabel n sebagai parameter
			nilai = n; // variabel "nilai" memiliki nilai yang sama dengan variable n
		}
		
		int getNum(){ // fungsi untuk mngembalikan nilai dari "nilai"
			return nilai; //Membalikan kembali nilai dari variabel nilai
		}
};

int main(){ // Kode utama yang dijalankan terlebih dahulu
	contoh obj(10); // membuat objek dari nilai 10 yang di kirim pada konstruktor
	cout << "Nilai yang diinput: " << obj.getNum() << endl; // mencetak nilai pada obj.getNum
	return 0; //mengembalikan nilai 0 sebagai indikasi kode berjalan dengan baik
}
