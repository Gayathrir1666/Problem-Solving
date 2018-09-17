//Link to the question: https://codeforces.com/problemset/problem/263/A

#include<bits/stdc++.h>
using namespace std; 

int main(){
	long long int m[5][5];
	long long int x,y,i,j,ans=0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			cin >> m[i][j];
		}
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			
			if(m[i][j] == 1){
				x = i + 1;
				y = j + 1;
			}
		}
	}
	
	ans = abs(x-3) + abs(y-3);
	cout << ans;
	
	return 0;	
}
