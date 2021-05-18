#include<bits/stdc++.h>
using namespace std;
int main(){
	int mayor = 0,c = 1;
	string s;
	cin >> s;
	for(int i = 0;i<s.length();i++){
		if(i + 1< s.length() && s[i] == s[i+1]){
			c++;
		} else {
			if( c >= mayor){
				mayor = c;
			}
			c = 1;	
		}	
	}
	cout << mayor;
	return 0;
}
