#include <iostream>
#include <vector>
#include <fstream>
using namespace std;
int n, k;
int v[100];

void comb(int num){
	if(num > k)
	{
		for(int i=1; i<=k; i++)
			cout << v[i] << " ";
		cout << endl;
		return;
	}
	v[num] = v[num-1]+1;
	while(v[num] <= n)
	{
		comb(num+1);
		v[num]++;
	}
	return;
}


int main(void){

	freopen ("choose.in","r",stdin);
	freopen ("choose.out","w",stdout);
	cin >> n >> k;
	
	v[0]=0;
	comb(1);
       
	return 0;
}
