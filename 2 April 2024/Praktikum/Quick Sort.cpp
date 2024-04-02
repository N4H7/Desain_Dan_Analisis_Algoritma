#include <iostream>
#include <stdio.h>
using namespace std;

float bagi(int a[]){
	float hasil;
	if(a[0]<a[1]){
		swap(a[0],a[1]);
	}
	if(a[1]==0){
		cout<<"ERROR!!!!!!!!";
	}else{
	hasil=a[0]/a[1];
	return hasil;
}
}

int kali(int a[]){
	int hasil;
	hasil=a[0]*a[1];
return hasil;
}

int kurang(int a[]){
	int hasil;
		if(a[0]<a[1]){
		swap(a[0],a[1]);
	}
	hasil=a[0]-a[1];
	return hasil;
	
}

int tambah(int a[]){
	int hasil;
	hasil=a[0]+a[1];
	return hasil;
}

int main(){
	int a[2];
	char pilih, ulang;
	do{
		cout<<"Masukan dua angka ";
		for(int i=0;i<2;i++){
		cin>>a[i];
	}
		cout<<"Pilih operasi(+ untuk pertambahan,- untuk pengurangan,* untuk perkalian,/ untuk pembagian):  ";
		cin>>pilih;
			switch(pilih){
		case '+':
			cout<<"Hasil penambahan :"<<tambah(a);
			break;
		
		case '-':
			cout<<"hasil kurang :"<<kurang(a);
			break;
			
		case '*':
				cout<<"Hasil perkalian :"<<kali(a);
			break;
				
		case '/':
			cout<<"Hasil pembagian :"<<bagi(a);
			break;
			
	}			
		cout << "\nApakah ingin mengulang proses?(y/n) ";
		cin>>ulang;
	}while(ulang == 'y' || ulang == 'Y');
}
