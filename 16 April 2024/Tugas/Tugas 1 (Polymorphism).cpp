#include <iostream>
using namespace std;

class Mahasiswa{
	
	protected:
		string nama;
		string jurusan;
		string status;
		string fakultas;
		int umur;
	
	public:
	virtual void data(){
		cout << "Status: " << status << endl;
		cout << "Nama: " << nama << endl;
		cout << "Umur: " << umur << endl;
		cout << "Jurusan: " << jurusan << endl;
		cout << "Fakultas: " << fakultas << endl;
	}

	void datamasuk(){
		cout << endl;
		cout << "Masukan Status: ";
		getline (cin >> ws, status);
		cout << "Masukan Nama: ";
		getline (cin >> ws, nama);
		cout << "Masukan Jurusan: ";
		getline (cin >> ws, jurusan);
		cout << "Masukan Fakultas: ";
		getline (cin >> ws, fakultas);
		cout << "Masukan Umur: ";
		cin >> umur;
		cout << endl;
	}
	
};



class mhs1 : public Mahasiswa {
public:
    void data(){
        cout << "\n!!Data Mahasiswa 1!!" << endl;
        Mahasiswa::data();
    }
};

class mhs2 : public Mahasiswa {
public:
    void data(){
        cout << "\n!!Data Mahasiswa 2!!" << endl;
        Mahasiswa::data();
    }
};

class mhs3 : public Mahasiswa {
public:
    void data(){
        cout << "\n!!Data Mahasiswa 3!!" << endl;
        Mahasiswa::data();
    }
};

class mhs4 : public Mahasiswa {
public:
    void data(){
        cout << "\n!!Data Mahasiswa 4!!" << endl;
        Mahasiswa::data();
    }
};

class mhs5 : public Mahasiswa {
public:
    void data(){
        cout << "\n!!Data Mahasiswa 5!!" << endl;
        Mahasiswa::data();
    }
};

// Line 41 - 79 menggunakan bantuan AI / Chat GPT untuk penyempurnaan

int main() {
    cout << "-----------------------Data Mahasiswa!!-----------------------" << endl;
    Mahasiswa* h1 = new mhs1;
    Mahasiswa* h2 = new mhs2;
    Mahasiswa* h3 = new mhs3;
    Mahasiswa* h4 = new mhs4;
    Mahasiswa* h5 = new mhs5;

    h1->datamasuk();
    h1->data();
    delete h1;
    
    h2->datamasuk();
    h2->data();
    delete h2;
    
    h3->datamasuk();
    h3->data();
    delete h3;
    
    h4->datamasuk();
    h4->data();
    delete h4;
    
    h5->datamasuk();
	h5->data();
	delete h5;

    return 0;
}
