#include <iostream>
using namespace std;

class kontak{
	private:
		string nama[100];
		int no[100];
	public:
		kontak(){
			nama[0] = "Tidak Diketahui";
			no[0] = 000000000000;			
		}
		
		void data(int x[], string a[], int c){
			for(int i = 0; i < c; i++) {
				nama[i] = a[i];
				no[i] = x[i];
			}
		}
		
		void tampil(int j){
			for(int i = 0; i < j; i++){
				cout << "\nKontak ke-" << i + 1 << endl <<"Nama: " << nama[i] << endl << "Nomor Telpon: " << no[i] << endl << "--------------------------------" << endl;
			}
		}
};

int main() {
    int c = 0, d[1000];
    string a, b[1000];
    char x;
    kontak kntk;

    cout << "Masukan Kontak Baru (Max 3 Kontak): " << endl;

    do {
        cout << "Masukan Nama Kontak ke-" << c + 1 << ": ";
        getline(cin >> ws, a);
        cout << "Masukan Nomor: ";
        cin >> d[c];

        b[c] = a;
        c++;
        cout << "Kontak Berhasil Ditambahkan\n";

        cout << "Tambahkan Kontak Lagi? (y/n)";
        cin >> x;
        cin.ignore(); // Membersihkan buffer
    } while ((x == 'y' || x == 'Y') && c < 3);

    if (c == 3) {
        kntk.data(d, b, c);
        kntk.tampil(c);
        cout << "!!Data disimpan dan Mencapai Batas Maksimal!!" << endl;
    } else {
        kntk.data(d, b, c);
        kntk.tampil(c);
        cout << "!!Data disimpan!!" << endl;
    }

    return 0;
}
