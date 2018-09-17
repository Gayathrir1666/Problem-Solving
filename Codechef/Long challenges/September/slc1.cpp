//https://www.codechef.com/SEPT18B/problems/MAGICHF
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll t,n,k,s;
	cin >> t;
	ll i;

	while(t--){
		cin >> n >> k >> s;
		ll a1[s],b1[s];
		for(i=0;i<s;i++){
			cin >> a1[i] >> b1[i];
			if(a1[i] == k){
				k = b1[i];
			}
			
			else if(b1[i] == k){
				k = a1[i];
			}
			
		}
		
		cout << k << endl;
	}	
}
		
		
