#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,n,m,x,y;
    cin>>test;
    while(test--) {
        cin>>n>>m>>x>>y;
        ll moves = n+m-2+x;
        // if either both are even or both are odd
        // ans if path + x is odd
        if((a+b)%2==0 && moves%2==1) {
            cout<<"NO\n";
        } else {
            cout<<"YES\n";
        }
    }
    return 0;
}