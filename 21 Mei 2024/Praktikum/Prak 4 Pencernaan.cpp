#include <iostream>
#include <string.h>
using namespace std;

const int MAX = 5;

class Queue{
	private:
		int front, rear, isi;
		string x;
		string arr[MAX];
		
	public:
		Queue(){
			front = -1;
			rear = -1;
			isi = -1;
		} 
		
		bool isEmpty(){
			return isi == 0;
		}
		
		bool isFull(){
			return isi == MAX;
		}
		
		void Makan(string a){
			if (isFull()){
				cout << "!Duh Kenyang Bre!" << endl;
				return; 
			}
			if (front == -1) front = 0;
			arr[++rear] = a;
			cout << a << " Dimakan!\n";
		}
		
		void Cerna(){
			if (isEmpty()){
				cout << "!Ini Mah Laper!" << endl;
				return;
			}
			cout << "Memakan " << arr[front++] << ".\n";
			if (front > rear){
				front = rear = -1;
			}
		}
		
		void cek(){
			if (isi <= 0){
				cout << "!Perut Kosong!" << endl;
			}
			else{
				for (int i=0; i<5; i++){
					cout << arr[i] << endl;
				}	
			}
			return;
		}
		
};

int main(){
	Queue q;
	int o;
	
	do{
		cout << "\nSISTEM PENCERNAAN! :" << endl
		 	 << "1. Makan makanan baru" << endl
		 	 << "2. Cerna makanan" << endl
		  	 << "3. Ingat Makan apa" << endl
		 	 << "4. Keluar kantin" << endl
		 	 << "Pilih Opsi! : ";
	cin >> o;

	if (o == 1){
		string m;
		cout << "Masukan Makanan: " << endl;
		cin >> m;
		q.Makan(m);
		}
		if(o == 2){
			q.Cerna();
		}
		if(o == 3){
			q.cek();
		}
	}
	while(o < 4);
}
