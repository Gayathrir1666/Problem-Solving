//http://codeforces.com/problemset/problem/1051/B
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	unsigned ll a,b,i;
	cin >> a >> b;
			cout << "YES" << endl;

	for(i=a;i<=b;i=i+2){
		cout << i << " "  << i + 1<< " " << endl;
	}
}
