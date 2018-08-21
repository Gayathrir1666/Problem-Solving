//Link to the problem:http://codeforces.com/problemsets/acmsguru/problem/99999/123

#include<bits/stdc++.h>
using namespace std;

int main(){
	
long long int n,s = 0,s1=0;
cin >> n;

	long long int a[n];
	long long int i;
	
	a[0] = 1;
	a[1] = 1;
	
	for(i=2;i<n;i++){
		a[i] = a[i-1] + a[i-2];
		s = s + a[i] ;
	}
	if(n==0)
	{
		cout <<0;
	}
	else if(n==1)
	{
		cout << 1;
	}
	else if(n==2)
	{
		cout<<2;
	}
	else
	{
	s1 = s + a[0] + a[1];
	
	cout << s1;
	}
	return 0;
}



