#include <iostream>
#include <sstream>
using namespace std;

const int MAX = 5;

class Queue {
    private:
        int front, rear, isi;
        string arr[MAX];
        
    public:
        Queue() {
            front = -1;
            rear = -1;
            isi = 0;
        } 
        
        bool isEmpty() {
            return isi == 0;
        }
        
        bool isFull() {
            return isi == MAX;
        }
        
        void Beli(int a, int m) {
            if (isFull()) {
                cout << "!Antrian Tiket Penuh!" << endl;
                return;     
            }
            if (front == -1) front = 0;
            rear = (rear + 1) % MAX;
            stringstream ss;
            ss << m;
            arr[rear] = ss.str();
            isi++;
            cout << "Costumer " << m << " Membeli Paket Tiket Nomor " << a << endl;
        }
        
        void KeluarAntri() {
            if (isEmpty()) {
                cout << "Antri Tiket Sepi" << endl;
                return;
            }
            cout << "Costumer " << arr[front] << " Sudah Masuk Area Bermain\n";
            front = (front + 1) % MAX;
            isi--;
            if (isEmpty()) {
                front = rear = -1;
            }
        }
        
        void cek() {
            if (isEmpty()) {
                cout << "!Antrean Kosong!" << endl;
            } else {
                cout << "Antrean saat ini:\n";
                for (int i = 0; i < isi; i++) {
                    cout << "Costumer " << arr[(front + i) % MAX] << endl;
                }    
            }
        }
};

int main() {
    Queue q;
    int o;
    
    do {
        cout << "\nBeli Tiket! :" << endl
             << "1. Paket Unlimited" << endl
             << "2. Paket Half a Day + free lunch" << endl
             << "3. Paket Half a Day Normal " << endl
             << "4. Paket 10 Wahana" << endl
             << "5. Keluar" << endl
             << "Pilih Paket : ";
        cin >> o;

        if (o > 0 && o < 5) {
            int m;
            cout << "Nomor Costumer: ";
            cin >> m;
            q.Beli(o, m);
            
            cout << "Costumer yang Sudah Beli Tiket:\n";
            q.cek();
            char b;
            cout << "Geser costumer (Y/N)? ";
            cin >> b;
            if (b == 'Y' || b == 'y') {
                q.KeluarAntri();
            }
        } else if (o != 5) {
            cout << "Pilihan tidak valid, silakan coba lagi." << endl;
        }
    } while (o != 5);

    return 0;
}

