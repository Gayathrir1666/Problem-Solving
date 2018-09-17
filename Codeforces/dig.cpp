//http://codeforces.com/problemset/problem/672/B
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll data[26];
int main(){
    ll n;
    cin >> n;
    string s;
    cin >> s;
    if (n > 26){
        cout << -1 << endl;
    }
    else{
        map<char,ll>m;
        for (ll i=0;i<(ll)s.size();i++){
            if (m.find(s[i]) == m.end()){
                m[s[i]] = 1;
            }
            else{
                m[s[i]]++;
            }
        }
        ll ans = 0;
        map<char,ll>::iterator it;
        for (it=m.begin();it!=m.end();it++){
            ans = ans + it->second - 1;
        }
        cout << ans << endl;
    }
}
