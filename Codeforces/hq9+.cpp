//http://codeforces.com/problemset/problem/133/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	string s;
	cin >> s;
	ll l,i;
	string x;
	l = s.size();
	for(i=0;i<l;i++){
		if((s[i] == 'H') ||(s[i] == 'Q') || (s[i] == '9')){
				x = "YES";
				break;
		}
		else{
			x = "NO";
		}
	}
	
	cout << x << endl;
}
