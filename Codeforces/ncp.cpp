//http://codeforces.com/problemset/problem/1038/B
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll i,n;
	cin >> n;
	if((n==1) || (n==2)){
		cout << "No";
	}
	else{
		cout<<"Yes"<<endl;
		cout<<n-1<<" ";
		for(i=1; i<n; i++){
			cout<<i<<" ";
		}
		cout<<endl<<1<<" "<<n<<endl;
	}
}
