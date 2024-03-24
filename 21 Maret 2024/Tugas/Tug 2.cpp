#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Pinjam{
    private:
        string buku;
        
    public:
        
    void setBuku(string a){
        buku = a;
    }
    
    string getBuku(){
        return buku;
    }
};

int main(){
    cout << "========================== Peminjaman Buku ==========================";
    
    int pinjem;
    
    Pinjam data[5];
    for (int i = 0; i < 5; ++i) {
        string namaBuku;

        cout << "\nMasukkan nama buku ke-" << i + 1 << ": ";
        getline(cin >> ws, namaBuku);
        data[i].setBuku(namaBuku);
    }
   
    
    cout << "List Buku: \n";
    for (int i = 0; i < 5; ++i) {
        cout << i + 1 << ". " << data[i].getBuku() << endl;
    }
    
    char pilih = 'y'; 
    do {
        cout << "Ingin meminjam Buku yang mana? ";
        cin >> pinjem;

        if (pinjem >= 1 && pinjem <= 5) {
            for (int i = pinjem - 1; i < 4; ++i) {
                data[i] = data[i + 1];
            }
            data[4].setBuku("");
        }
        
        cout << "\nList Buku Setelah Meminjam: \n";
        for (int i = 0; i < 4; ++i) {
            cout << i + 1 << ". " << data[i].getBuku() << endl;
        }
        
        int nomorKembali;
        cout << "Masukkan nomor buku yang ingin dikembalikan: ";
        cin >> nomorKembali;

        if (nomorKembali >= 1 && nomorKembali <= 5 && data[nomorKembali - 1].getBuku() != "") {
            cout << "Masukkan nama buku yang dikembalikan: ";
            string namaKembali;
            getline(cin >> ws, namaKembali);

            data[nomorKembali - 1].setBuku(namaKembali);

            cout << "List Buku Setelah Pengembalian: ";
            for (int i = 0; i < 5; ++i) {
                cout << i + 1 << ". " << data[i].getBuku() << endl;
            }
        }

        cout << "Apakah ingin melanjutkan (y/n)? ";
        cin >> pilih; 
    } while (pilih == 'y' || pilih == 'Y'); 

    return 0;
}
