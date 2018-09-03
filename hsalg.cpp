//https://codeforces.com/problemset/problem/514/B
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double a,b; 
    cin >> n >> a >> b;
    set<double>s;
    while (n--){
        double a1,b1,slope;
        cin >> a1 >> b1;
        if (a1 == a){
            slope = LONG_LONG_MAX;
        }
        else{
            slope = (b1 - b) / (a1 - a);
        }
        s.insert(slope);
    }
    cout << s.size() << endl;
    return 0;
}
