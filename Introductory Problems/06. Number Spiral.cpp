#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--){
        long long x,y;
        cin >> x >> y;
        if(x == y){
            cout << (x*x)-(x-1);
        } else if(x > y){
            if(x % 2 == 0){
                cout << x*x - (y-1);
            } else {
                cout << x*x -(x+(x-y-1));
            }
        } else{
            if(y%2 == 0){
                cout << y*y -(y+(y-x-1));
            } else {
                cout << y*y -(x-1);
            }
        }
        cout << "\n";
    }
    return 0;
}

