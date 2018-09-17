//https://www.codechef.com/SEPT18B/problems/CHEFADV
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	
	ll t;
	cin >> t;
	ll n,m,x,y;
	while(t--){
	cin >> n >> m >> x >> y;
	if((n-1 >= 0) && (m-1 >= 0) && ((n-1)%x == 0) && ((m-1)%y == 0)){
		cout << "Chefirnemo" << endl;
	}
	else if((n-2 >= 0) && (m-2 >= 0) && ((n-2)%x == 0) && ((m-2)%y == 0)){
		cout << "Chefirnemo" << endl;
	}
	else{
			cout << "Pofik" << endl;
		}
	}
}
