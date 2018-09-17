//Link to the question: http://codeforces.com/problemset/problem/554/A

#include<bits/stdc++.h>
#include<string>
#define ll long long 
using namespace std;

int main(){
 string z;
 cin >> z;
 ll n,l,m,o;
 
 l = z.size();
 
 n = (26-l) * (l + 1);   
 m = (l * l);
 
 o = n + m;
 
 cout << o;
 return 0;
 
}
