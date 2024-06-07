#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;
const int INF = INT_MAX;

int minDistance(const vector<int>& dist, const vector<bool>& sptSet, int n) {
    int min = INF, min_index = -1;
    for (int v = 0; v < n; v++) {
        if (!sptSet[v] && dist[v] < min) {
            min = dist[v];
            min_index = v;
        }
    }
    return min_index;
}

void jalur(const vector<int>& parent, int j) {
    if (parent[j] == -1)
        return;
    jalur(parent, parent[j]);
    cout << " --> " << j + 1;
}

void dijkstra(const vector<vector<int> >& graph, int src, int n) {
    vector<int> dist(n, INF); 
    vector<bool> sptSet(n, false); 
    vector<int> parent(n, -1); 

    dist[src] = 0;

    for (int count = 0; count < n - 1; count++) {
        int u = minDistance(dist, sptSet, n);
        sptSet[u] = true;

        for (int v = 0; v < n; v++) {
            if (!sptSet[v] && graph[u][v] && dist[u] != INF && dist[u] + graph[u][v] < dist[v]) {
                parent[v] = u;
                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    cout << "\nJalur Terpendek: ";
    cout << src + 1;
    jalur(parent, n - 1);
    cout << " --> " << src + 1; 
    cout << "\n\nMinimum Cost: " << dist[n-1] << endl;
}

int main() {
    int n;
    cout << "Masukkan Jumlah Kota : ";
    cin >> n;
	
	cout << "Nilai Cost Matrix" << endl;
	
    vector<vector<int> > costMatrix(n, vector<int>(n, 0));
    
    for (int i = 0; i < n; ++i) {
        cout << "Cost Element Baris ke- " << i + 1 << endl;
        for (int j = 0; j < n; ++j) {
            cin >> costMatrix[i][j];
        }
    }

    cout << "\nCost List: \n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << costMatrix[i][j] << " ";
        }
        cout << endl;
    }

    dijkstra(costMatrix, 0, n);

    return 0;
}

