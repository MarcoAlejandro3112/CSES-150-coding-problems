#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int j = 0;
	for(long long i = 1;i<=n;i++){
		if(i == 1){
			cout << 0 << "\n";
		} else{
			cout << (((i*i)*(i*i-1))/2) - j << "\n"; 
			j+=(8*(i-1)); 
		}
	}
	return 0;
}
