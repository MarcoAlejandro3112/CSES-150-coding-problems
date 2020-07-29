#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >> n;
	int sum = 0,actualSum = 0,j = 1;
	n--;
	while(n--){
		int a;
		cin >> a;
		actualSum +=a;
		sum+=j;
		j++;
	}
	sum+=j;
	cout <<  sum - actualSum;
	return 0;
}
