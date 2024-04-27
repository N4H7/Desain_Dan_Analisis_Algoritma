#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

const int N = 100;
string buku[N];

int caribuku(string x, int l, int r) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (buku[mid] == x) {
            return mid;
        }
        if (buku[mid] > x) {
            return caribuku(x, l, mid - 1);
        }
        return caribuku(x, mid + 1, r);
    }
    return -1;
}

int main() {
    int n;
    cout << "Masukkan Jumlah Buku Dalam Perpustakaan IBIK: ";
    cin >> n;

    cout << "Masukkan Nama Buku-Buku yang Tersedia: " << endl;
    for (int i = 0; i < n; i++) {
        getline(cin, buku[i]);
    }

    sort(buku, buku + n);

    string x;
    cout << "Masukkan Nama Buku yang Ingin Dicari: ";
    getline(cin, x);

    int hasil = caribuku(x, 0, n - 1);
    if (hasil == -1) {
        cout << "!!Buku tidak ditemukan!!" << endl;
    } else {
        cout << "Buku Ditemukan pada indeks " << hasil + 1 << endl;
    }

    return 0;
}

