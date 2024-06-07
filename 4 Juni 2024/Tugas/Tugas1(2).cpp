#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

void cetakMatriksBiaya(const vector<vector<int> >& matriksBiaya) {
    cout << "Cost List :" << endl;
    for (size_t a = 0; a < matriksBiaya.size(); ++a) {
        for (size_t b = 0; b < matriksBiaya[a].size(); ++b) {
            cout << matriksBiaya[a][b] << "   ";
        }
        cout << endl;
    }
}

void temukanJalurTerpendek(const vector<vector<int> >& matriksBiaya, vector<int>& jalur, int& biayaMin) {
    int p = matriksBiaya.size();
    vector<int> kota;
    for (int c = 1; c < p; c++) {
        kota.push_back(c);
    }

    biayaMin = INT_MAX;
    do {
        int biayaSaatIni = 0;
        int d = 0;
        for (size_t e = 0; e < kota.size(); e++) {
            biayaSaatIni += matriksBiaya[d][kota[e]];
            d = kota[e];
        }
        biayaSaatIni += matriksBiaya[d][0];

        if (biayaSaatIni < biayaMin) {
            biayaMin = biayaSaatIni;
            jalur.clear();
            jalur.push_back(0);
            jalur.insert(jalur.end(), kota.begin(), kota.end());
            jalur.push_back(0);
        }
    } while (next_permutation(kota.begin(), kota.end()));
}

int main() {
    int f;
    cout << "Masukkan Jumlah Kota: ";
    cin >> f;

    vector<vector<int> > matriksBiaya(f, vector<int>(f));
    cout << "Nilai Cost Matrix" << endl;
    for (int g = 0; g < f; ++g) {
        cout << "Cost Element Baris ke-: " << g + 1 << endl;
        for (int h = 0; h < f; ++h) {
            cin >> matriksBiaya[g][h];
        }
    }

    cetakMatriksBiaya(matriksBiaya);

    vector<int> jalur;
    int biayaMin;
    temukanJalurTerpendek(matriksBiaya, jalur, biayaMin);

    cout << "Jalur Terpendek : ";
    for (size_t i = 0; i < jalur.size(); ++i) {
        cout << jalur[i] + 1;
        if (i != jalur.size() - 1) {
            cout << "-->";
        }
    }
    cout << endl<<endl;

    cout << "Minimum Cost : " << biayaMin << endl;

    return 0;
}

