#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,n,x,y;
    cin>>test;
    while(test--) {
        cin>>n>>x>>y;
        vector<ll> vec(n);
        ll maxi = -1e12, ans=0;
        for(ll index=0; index<n; index++) {
            cin>>vec[index];
            maxi = max(maxi, vec[index]);
        }

        if(y>=x) {
            // no need to worry about x at all, normal moves are more powerful
            ans = ceil(maxi*1.0/y);
            cout<<ans<<endl;
            continue;
        }
        // if x>y, we need to use i and do the operation
        ll remove=0;
        for(ll index=n-1; index>=0; index--) {
            vec[index]=max((ll)0,vec[index]-remove);
            // apply x
            ll move = ceil(vec[index]*1.0/x);
            remove += move*y;
            ans += move;
        }
        cout<<ans<<endl;
    }
    return 0;
}