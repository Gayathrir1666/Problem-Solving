//http://codeforces.com/problemset/problem/118/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	cin >> s;
	char t;
	for(int i=0;i<s.length();i++){
	    t = s[i];
	    t = tolower(t);
	    if(t!='a'&&t!='e'&&t!='i'&&t!='o'&&t!='u'&&t!='y'){
	        cout << '.'<<t;
	    }
	}
	
}
