/*
2x + 7y = N

2,4,6,7,8,9,10,11,12,13,14,15,16,17
N!=1,3,5
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,X;
    cin>>test;
    while(test--) {
        cin>>X;
        if(X==1 || X==3 || X==5) {
            cout<<"NO\n";
        } else {
            cout<<"YES\n";
        }
    }
    return 0;
}