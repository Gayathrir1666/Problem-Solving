#include <bits/stdc++.h>
using namespace std;


int main(){
    long long int n, rem=0, rev = 0;
    cin>>n;
    while(n != 0){
        rem = n % 10;
        rev = rev *10 + rem;
        n = n / 10; 
    }
    if(n == rev){
	cout << "yes"
}
else{
	cout << "no"
}
    return 0;
    
}
