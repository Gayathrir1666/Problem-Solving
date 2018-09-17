//http://codeforces.com/problemset/problem/339/A
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
	string s;
	cin >> s;
	ll l,i;
	l = s.size();
	char s1[l];
	ll j=0;
	for(i=0; i<l; i=i+2)
	{
		s1[j] = s[i];
	//	cout << s1[j]<<" "<<s[i]<<"\n";
		j++;
	}
	sort(s1,s1+j);
	for(i=0;i<j-1;i++)
	{
		cout << s1[i]<<"+";
	}
	cout << s1[i];
	
}
	
			
