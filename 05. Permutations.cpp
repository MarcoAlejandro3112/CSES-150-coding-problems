#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	if(n == 1){
		cout << 1;
	}
	if(n <= 3){
		cout << "NO SOLUTION";
	} else {
		vector<int> v,v2;
		for(int i = 1;i<=n;i++){
			if(i % 2 == 0){
				v.push_back(i);
			} else {
				v2.push_back(i);	
			}	
		}
		for(int i = 0;i< v.size();i++){
			cout << v[i] << " ";
		}
		for(int i = 0;i<v2.size();i++){
			cout << v2[i] << " ";
		}
	}
	return 0;
}
