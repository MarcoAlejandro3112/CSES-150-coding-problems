#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	vector<int> v;
	while(n--){
		int a;
		cin >> a;
		v.push_back(a);
	}
	long long mayor = 0;
	for(int i = 1;i< v.size();i++){
		if(v[i] < v[i-1]){
			mayor += (v[i-1] - v[i]); 
			v[i] = v[i-1];
		}
 	}
 	cout << mayor;
	return 0;
}
