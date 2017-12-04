#include <iostream>
#include <vector>
#include <fstream>
using namespace std;


int comb(int n,int k){
    if ((n==k) || (k==0)) {
        return 1;
    }
    if (k==1) {
        return n;
    }
    return comb(n-1,k)+comb(n-1,k-1);
}

int main(){
    freopen ("comb.in","r",stdin);
	freopen ("comb.out","w",stdout);

    int n, k, p, c, t, last=0;
    cin >> n >> k >> p;
    for (int i=1; i<=k; i++) {
        c = comb(n-i,k-i);

        t=0;

        while (p>=c) {
            t++;
            p -= c;
            c = comb(n-t-i,k-i);
        }
        cout << t+1+last << ' ';
        last+=t+1;
    }
    return 0;
}
