#include <iostream>
using namespace std;

void sesort(int arr[], int n) {
    int i, j, minIndex, temp;
    for (i = 0; i < n-1; i++) {
        minIndex = i;
        for (j = i+1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;   
        }
        
        cout << "Proses Sorting " << i << ": ";
        for (j=0; j<n; j++){
        	cout << arr[j] << " ";
		}
		cout << "\n";
    }
}

void sesortdes(int arr[], int n) {
    int i, j, maxIndex, temp;
    for (i = 0; i < n - 1; i++) {
        maxIndex = i;

        for (j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }

        temp = arr[maxIndex];
        arr[maxIndex] = arr[i];
        arr[i] = temp;

        cout << "Proses Sorting Descending " << i + 1 << ": ";
        for (j = 0; j < n; j++) {
            cout << arr[j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int n, i;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;
    int arr[n];
    cout << "Masukkan elemen: ";
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Data sebelum sorting: ";
    for (i = 0; i < n; i++) {
    	cout << arr[i] << " ";
    }
    cout << "\n";
    cout << "\n";
    
    sesort(arr, n);
    cout << "Data setelah diurutkan: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
    cout << "\n";
    
    sesortdes(arr, n);
    cout << "Data setelah diurutkan descending: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
