#include <iostream>
#include <algorithm>
#include <cstdio>
#include <stdio.h>
using namespace std;



int main(){
	freopen("ladder.in", "r", stdin);
	freopen("ladder.out", "w", stdout);
	int n;
	int a[100];
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> a[i];
	int b[100];
	b[0] = a[0];
	b[1] = max(a[0] + a[1], a[1]);
	for (int i = 2; i < n; i++){
		b[i] = max(b[i - 1], b[i - 2]) + a[i];
	}
	cout << b[n - 1] << endl;
}
