//http://codeforces.com/problemset/problem/4/C
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	ll n;
	string s;
	cin >> n;
	map<string,int>m1;
	while(n--){
		cin >> s;
		if(m1.find(s) == m1.end()){
			m1[s] = 0;
			cout << "OK" << endl;
		}
		
		else{
			cout << s << m1[s] + 1 << endl;
			m1[s] = m1[s] + 1;
		}
	}
	
	return 0;
}
