#include <iostream>
#include <cstdio>
#include <stdio.h>

using namespace std;
	int a[100][100];
	int b[100][100];
int max(int a, int b){
	if (a > b)
		return a;
	else 
		return b;
}
int sum(int i, int j){
	if (j == 0)
		return b[i - 1][j];
	else if (i == j)
		return b[i - 1][j - 1];
	else
		return max(b[i - 1][j], b[i - 1][j - 1]);
}
int main(){

	int l;
	cin >> l;
	for (int i = 1; i <= l; i++)
		for (int j = 0; j < i; j++){
			cin >> a[i - 1][j];
			b[i - 1][j] = 0;
		}
	b[0][0] = a[0][0];
	for (int i = 1; i < l; i++)
		for (int j = 0; j < i + 1; j++){
			b[i][j] = sum(i, j) + a[i][j];
		}
	int max = -1000000;
	for (int i = 0; i < l; i++)
		if (b[l - 1][i] > max)
			max = b[l - 1][i];
	cout << max << endl;
	return 0;
}

