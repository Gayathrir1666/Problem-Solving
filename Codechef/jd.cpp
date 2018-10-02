//https://www.codechef.com/LTIME64B/problems/JDELAY
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
		ll t,n;
		cin >> t;
		while(t--){
			cin >> n;
			ll i,a[n],b[n],c = 0,ans;
			for(i=0;i<n;i++){
				cin >> a[i] >> b[i];
				ans = b[i] - a[i];
				if(ans > 5){
					c++;
				}
			}
			cout << c << endl;
		}
	
}
