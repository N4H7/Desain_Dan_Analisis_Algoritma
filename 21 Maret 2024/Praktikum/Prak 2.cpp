#include <iostream>
#include <string>
using namespace std;

class hewan {
	private:
		string nama;
		string spesies;
		
	public:
	void setnama(string n){
			nama = n;
		}
		
	void setspesies(string s){
		spesies = s;
	}
	
	string getnama(){
		return nama;
	}
	
	string getspesies(){
		return spesies;
	}
};

main(){
	hewan Hewan;
	Hewan.setnama("Anjing");
	Hewan.setspesies("Rottweiler");
	
	cout << "Nama: " << Hewan.getnama() << endl;
	cout << "Spesies: " << Hewan.getspesies() << endl;
	return 0;
}
