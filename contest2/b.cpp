#include <iostream>
#include <fstream>
using namespace std;

int main() {
	freopen("inverse.in", "r", stdin);
	freopen("inverse.out", "w", stdout);
	
	int i, x, n, a[20000];
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> x;
		a[x - 1] = i + 1;
	}
	for (i = 0; i < n; i++) 
		cout << a[i] << " ";
	
	return 0;
}
