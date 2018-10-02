//https://www.codechef.com/problems/ATM2
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t;
	cin >> t;
	ll n,k,i;
	string s1;
	while(t--){
			cin >> n >> k;
			ll a[n],s;
			for(i=0;i<n;i++){
				cin >> a[i];
				s = k - a[i];
				if(s >= 0){
					cout << "1";
					k = s;
				}
				else{
					cout << "0";
				}
				
			}
			
			cout << endl;
	}
	
}
