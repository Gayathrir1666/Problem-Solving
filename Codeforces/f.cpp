//http://codeforces.com/contest/96/problem/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	string s;

	string a = "0000000";
	string b = "1111111";
	cin >> s;

	int x = s.find(a);
	int y = s.find(b);
	if(x>=0 || y>=0)
		cout <<"YES";
	else
		cout <<"NO";
		return 0;
	}
	
			
