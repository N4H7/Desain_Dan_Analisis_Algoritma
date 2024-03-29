#include <iostream>
#include <string>
using namespace std;

class pelajaran { //class name
	public: //Acces specifier
		pelajaran(){ // constructor
			cout << "Ini adalah materi C++ tentang constructors!";
		}
}; 

int main(){
	pelajaran k;
	
	return 0;
}
