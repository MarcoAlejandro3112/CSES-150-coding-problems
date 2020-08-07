#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n;
	cin >> n;
	long long sum = (n*(n+1))/2;
	if(sum % 2 == 0){
		vector<long long> v,v2;
		long long aux = sum / 2;
		long long s = 0;
		long long j = n;
		cout << "YES" << "\n";
		bool can = true;
		int com = -1;
		for(int i = n;i>=1;i--){
			if(s + i > aux){
				can = false;
				com = aux - s;
			} 
			if(can){
				s+=i;
				v.push_back(i);
			} else {
				if(com != i){
					v2.push_back(i);
				} else {
					v.push_back(com);
				}
			}
		}
		cout << v.size() << "\n";
		for(int i = 0;i<v.size();i++){
			cout << v[i] << " ";
		}
		cout << "\n";
		cout << v2.size() << "\n";
		for(int i = 0;i<v2.size();i++){
			cout << v2[i] << " ";
		}
	} else {
		cout << "NO";
	}
	return 0;
}
