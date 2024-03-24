#include <iostream>
#include <string>
using namespace std;

class Mahasiswa{
	private:
		string nama;
		int npm;
		
	public:
		
	void setnama(string a){
			nama = a;
		}
		
	void setnpm(int b){
		npm = b;
	}
	
	string getnama(){
		return nama;
	}
	
	int getnpm(){
		return npm;
	}
};

int main(){
	Mahasiswa data;
	string nama;
	int npm;
	
	cout << "Masukan nama mahasiswa: ";
	getline (cin, nama);
	cout << "Masukan NPM mahasiswa: ";
	cin >> npm;
	
	data.setnama(nama);
	data.setnpm(npm);
	
	cout << "Data Mahasiswa: ";
	cout << "\nNama: " << data.getnama() << endl;
	cout << "NPM: " << data.getnpm() << endl;
	
	return 0;
}


