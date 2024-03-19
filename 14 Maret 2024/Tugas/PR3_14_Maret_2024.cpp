#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

char book[100][1000], arr[100], s;
	int jmlh, p, c = 0, m;
	
int main(){

	do{
		if(c == -1){
			cout<<"=========xxxxxxxxxxx=========";
		}else{
			for(int i = 0; i < c; i++){
				cout<<i+1<<". ========="<<book[i]<<"=========\n";
			}		
		}
		cout<<endl;
		
		cout<<"Enter Book Name: ";
		cin>>book[c];
		cout<<"Fill lagi? : ";
		cin>>s;
		c++;
		system("cls");
	}
	
	while(s == 'y' || s =='Y');
	
	for(int i = 0; i < c; i++){
		cout<<i+1<<". ========="<<book[i]<<"=========\n";
	}
	cout<<endl<<"================================="<<endl;
	
	for (p = 1; p < c; p++) {
        for (m = 1; m < c; m++) {
            if (strcmp(book[m - 1], book[m]) > 0) {
                strcpy(arr, book[m - 1]);
                strcpy(book[m - 1], book[m]);
                strcpy(book[m], arr);
            }

        }
    }
    
    for (int x = 0; x < 10; x++){
    	cout << book[x] << endl;
	}
    cout << endl;
    return 0;
}
