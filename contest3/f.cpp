#include <iostream>
#include <cfloat>
#include <climits>
using namespace std;

int n, src, dest;
int a[100][100]; 

int used[100];

int d[100];

int main(){
	cin >> n >> src >> dest;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin>> a[i][j];
		}
	}
	for (int i = 0; i < n; i++){
		d[i] = INT_MAX;
		used[i] = 0;
	}
	d[src-1] = 0;
	for (int i = 0; i < n; i ++){
		int mini_d = INT_MAX;
		int u = -1;
		for (int j = 0; j < n; j++){
			if (d[j] < mini_d && used[j] == 0){
				mini_d = d[j];
				u = j;
			}
		}
		used[u] = 1;
		for (int v = 0; v < n; v++){
			if (a[u][v] > 0  && used[v] == 0 && d[u] != INT_MAX){
				if (d[u] + a[u][v] < d[v]){
					d[v] = d[u] + a[u][v];
				}
			}
		}
	}
	cout<<d[dest-1]<<endl;
	return 0;

		
}
