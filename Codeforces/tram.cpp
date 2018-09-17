//http://codeforces.com/problemset/problem/116/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;
	cin >> n;
	ll a[n],b[n];
	ll i,c=0,max=0;
	for(i=0;i<n;i++){
		cin >> a[i] >> b[i];
		c = c - a[i];
		c = c + b[i];
		
		if(c > max){
		max = c;	
		}
	}
	
		cout << max << endl;
	
}
