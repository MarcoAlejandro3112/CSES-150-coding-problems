#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n;
	vector<int> v;
	cin >> n;
	while(n--){
		int a;
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(),v.end());
	int c = 1;
	for(int i = 0;i<v.size()-1;i++){
		if(v[i] != v[i+1]){
			c++;
		}
	}
	cout << c;
	return 0;
}
