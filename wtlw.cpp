//Link to the question: http://codeforces.com/problemset/problem/71/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
		ll n,l;
		cin >> n;
		while(n--){
			string s;
			cin >> s;
			l = s.size();
			if(l <= 10){
				cout << s << "\n";
			}
			else{
				string r,r1,r2;
				ll r3;
				r1 = s[0];
				r2 = s[l -1];
				r3 = l - 2;
				cout << r1 << r3 << r2 << "\n";
				}
				
			}
			
		}
			
