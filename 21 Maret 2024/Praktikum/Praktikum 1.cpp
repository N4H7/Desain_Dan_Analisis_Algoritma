#include <iostream>
#include <string> //menambhakan libarary <string> untuk menggunakan tipe data string
using namespace std;

class silsilah{
	protected:
		string orangtua = "Albert Wijaya dan Jenny Lim";
		string anakanak = "Agatha Wjaya dan Jonathan Wijaya";
		
	public:
		string ceksilsilah(){
			//mengubah teks statis menjadi teks yang mengekstrak nama orantua dari variabel yang sudah ada
			return "Ayah bernama " + orangtua.substr(0, orangtua.find(" "))+
					" dan Ibu bernama " + orangtua.substr(orangtua.find(" ") + 4);
		}
};

class cucu : public silsilah {
	protected:
	string cucu = "Wilbert Tan dan Rayanza Wijaya";
	
	public:
		string cekanak(){
			// mengubah teks statis menjadi teks yang mengeskstrak nama anakanank dari variabel yang sudah ada
			return "Anak pertama keluarga wijaya adalah " + anakanak.substr(0, anakanak.find(" ")) +
			" dan anak kedua dari keluarga wijaya adalah " +
			anakanak.substr(anakanak.find(" ") + 4);
		}
};

class anak : public cucu {
	public:
		string lihatsilsilahnya(){
			return "Sisilah Keluarga Widjaya";
		}
		
		string cekcucu(){
			// mengubah teks statis menjadi teks yang mengekstrak nama cucu dari variabel yang sudah ada
			return "Cucu pertama bernama " + cucu.substr(0, cucu.find(" ")) +
					" dan Cucu kedua bernama " + cucu.substr(cucu.find(" ") + 4);
		}
};

int main(){
	anak silsilahwijaya;
	//output hasil nilai dari metode metode dalam kelas anak
	cout << silsilahwijaya.lihatsilsilahnya() << endl;
	cout << silsilahwijaya.ceksilsilah() << endl;
	cout << silsilahwijaya.cekanak() << endl;
	cout << silsilahwijaya.cekcucu() << endl;
	
	return 0;
}

