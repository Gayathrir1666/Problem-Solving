#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;
	cin >> n;
	ll r = n % 3;
	if (r == 0){
		cout << "1" <<  " " << "1" << " " << n -2;
	}
		else{
					cout << "1" << " " << "2" << " "<< n -3;
		}
	}
