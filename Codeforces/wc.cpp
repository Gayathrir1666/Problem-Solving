//http://codeforces.com/problemset/problem/281/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	string s;
	cin >> s;
	ll i = 0;
	if((s[i] >= 65) && (s[i] <= 90)){
		cout << s << endl;
	}
	
	else{
		s[i] = s[i]-32;
		cout << s << endl;
	}
}
