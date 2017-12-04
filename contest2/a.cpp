#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;



int main(){
	freopen("perm.in", "r", stdin);
	freopen("perm.out", "w", stdout);
	
	int n;

	cin >> n;
	string s = "";
	for(int i = 1; i <= n; i++){
		s+= i+48;
		cout << i << " ";
	}
	cout << endl;

	while(next_permutation(s.begin(), s.end())){
		for(int i=0; i<s.length(); ++i){
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

 