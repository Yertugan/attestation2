#include <iostream>
#include <cfloat>
#include <climits>
using namespace std;

int n;
int a[100][100]; 


int floyd(){

	for(int i = 1; i<=n; i++){
		for(int j=1; j<=n; j++){
			for(int k=1; k<=n; k++){
				if(a[j][i] * a[i][k] != 0){
					if((a[j][i] + a[i][k] <a[j][k]) || (a[j][k] == 0) && (j!=k)){
						a[j][k] = a[j][i] + a[i][k];
					}
				}
			}
		}
	}

	
}

int main(){
	cin >> n;
	
	for(int i = 0; i < n; i++){
		for(int j = 0 ;j < n; j++){
			cin >> a[i][j];
		}
	}
	floyd();

	for(int i = 0; i < n; i++){
		for(int j = 0 ;j < n; j++){
			cout << a[i][j] << " ";
		}
		cout << endl;
	}

	return 0;

		
}
