#include <iostream>
using namespace std;

class Hewan{
	public:
	virtual void bersuara(){
		cout << "..." << endl;
	}
};

class Kucing: public Hewan{
	public:
		void bersuara(){
			cout << " Kucing Berbunyi Meowwwww!!" << endl;
		}
};

class Anjing: public Hewan{
	public:
		void bersuara(){
			cout << "Anjing Berbunyi Guk Guk Guk" << endl;
		}
};

main(){
	Hewan *h1 = new Kucing();
	Hewan *h2 = new Anjing();
	
	h1->bersuara();
	h2->bersuara();
	
	return 0;
}
