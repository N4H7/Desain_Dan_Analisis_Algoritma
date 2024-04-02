#include <iostream>
using namespace std;

void sort(int x[]){
	
		for (int i=1; i<5; i++){
		int key = x [i];
		int j = i-1;
		
		while (j>=0 && x[j] > key){
			x[j+1] = x[j];
			j=j-1;
		}
		x[j+1]=key;
	
	}	
	
	cout << "\n Proses Setelah Sorting: \n";
	int i=0;
	while(i<5){
		cout << x[i] << " ";
		i++;
	}
}

int main(){
	int x[5] = {12, 11, 13, 5, 6};
	int i=0, key, j;
	
	cout << "Array sebelum diurutkan: \n";
	
	while(i<5){
		cout << x[i] << " ";
		i++;
	}
	
	sort(x);

	return 0;
}
 
 
