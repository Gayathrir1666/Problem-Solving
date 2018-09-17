//http://codeforces.com/problemset/problem/282/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
 ll n,c=0;
 string s;
 cin >> n;
 while(n--){
	 cin >> s;
		if((s[0] == '+') || (s[1]=='+'))
		{
			c++; 
		}
		else{
			c--;	
		}
	}
	
		 cout << c << endl;

}




