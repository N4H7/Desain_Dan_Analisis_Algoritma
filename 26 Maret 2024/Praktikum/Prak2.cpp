#include <iostream>
using namespace std;

class Laptop{
	private:
		string pemilik;
		string merk;
	
	public:
		Laptop (string var1, string var2){
			pemilik = var1;
			merk = var2;
			
			cout << "Paket Laptop " << merk << " milik " << pemilik << " Sudah dikirim" << endl;
		}
};

main(){
	Laptop laptopFadlan ("Fadlan","Asus");
	Laptop laptopFadil ("Fadil","Acer");
	Laptop laptopSiras ("Siras","ROG");
	
	return 0;
}
