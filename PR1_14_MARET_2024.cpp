#include <iostream>
using namespace std;

void insertsort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i-1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j = j-1;
            arr[j+1] = key;
        }
        
        cout << "Proses Sorting " << i << ": ";
        for (j=0; j<n; j++){
        	cout << arr[j] << " ";
		}
		cout << endl;
    }
    cout << endl;
}

int main() {
    int n, i;
    cout << "Masukkan banyak array: ";
    cin >> n;
    
    int arr[n];
    for (i = 0; i < n; i++) {
    	cout << "Masukan angka ke " << i << ": ";
        cin >> arr[i];
    }
    cout<<endl;
    
    insertsort(arr, n);
    cout << "Hasil Proses: \n";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
