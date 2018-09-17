//http://codeforces.com/problemset/problem/266/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,i;
	string c;
	cin >> n;
	cin >> c;
	ll c1=0;

	for(i=0;i<n;i++){
		if(c[i] == c[i+1]){
			c1 = c1 + 1;
		}
	}
	cout << c1 << endl;
	return 0;
}



