//http://codeforces.com/problemset/problem/1047/B
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n,a,b,i,r = 0;
	cin >> n;
	for(i=0;i<n;i++){
		cin >> a >> b;
		if(r < a + b){
			r = a + b;
		}
		
	}
	
		cout << r << endl;
	
}
