#include <iostream>
using namespace std;

class Karyawan {
	private:
		int gaji;
	public:
		void setGaji(int s) {
			gaji = s;
		}
		
		int getGaji(){
			return gaji;
		}
};

main(){
	Karyawan myObj;
	myObj.setGaji(120000);
	cout << "Gaji Karyawan Bulan In DIpukul Rata: Rp " << myObj.getGaji();
}
