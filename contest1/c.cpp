#include <iostream>
#include <cstdio>
#include <stdio.h>

using namespace std;
int main()
{
	freopen("knight.in", "r", stdin);
	freopen("knight.out", "w", stdout);
	int n, m;
	cin >> n >> m;
	int a[52][52];
	for (int i = 0; i <= n + 1; i++)
		for (int j = 0; j <= m + 1; j++)
			a[i][j] = 0;
	a[2][2] = 1;
	for (int i = 2; i <= n + 1; i++)
		for (int j = 2; j <= m + 1; j++)
			if (!((i == 2) && (j == 2)))
			a[i][j] = a[i - 1][j - 2] + a[i - 2][j - 1];
	cout << a[n + 1][m + 1] << endl;
	return 0;
}
