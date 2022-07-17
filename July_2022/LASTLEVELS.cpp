#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,X,Y,Z;
    cin>>test;
    while(test--) {
        cin>>X>>Y>>Z;
        ll ans = X*Y;
        ll breaks = ceil(X/3.0);
        if(breaks > 1) {
            breaks--;
            ans += breaks*Z;
        }
        cout<<ans<<endl;
    }
    return 0;
}