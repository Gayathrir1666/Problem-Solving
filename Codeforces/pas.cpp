//http://codeforces.com/problemset/problem/112/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	string a,b;
	cin >> a >> b;
	ll l;
	l = a.size();
	ll i;
	int x=0;
	for (i=0; i<l; i++){
     a[i] = toupper(a[i]);
     b[i] = toupper(b[i]);
     
	 if(a[i] < b[i]){
		x=-1;
		break;
	
	 }
	 
	 else if(a[i] > b[i]){
		x=1;
		break;
	 }
	 
	 
	 else{
		x=0;
	 }
        	
	}
	cout << x;
}
