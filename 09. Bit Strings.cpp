#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	long long ans = 1;
	for(int i = 0;i<n;i++){
		ans = ans * 2 % 1000000007;
	}
	cout << ans;
	return 0;
}
