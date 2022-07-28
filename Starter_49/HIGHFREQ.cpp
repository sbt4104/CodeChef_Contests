#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll const MAX_N=100005;

int main() {
    ll test,n;
    cin>>test;
    while(test--) {
        cin>>n;
        vector<ll> a(n,0), score(MAX_N,0);
        unordered_map<ll,ll> map;
        for(ll index=0; index<n; index++) {
            cin>>a[index];
            map[a[index]]++;
        }

        ll maxi = -1e12, freq=0;
        for(auto val: map) {
            ll key=val.first;
            ll value=val.second;
            if(value > maxi) {
                maxi=value;
                freq=1;
            } else if(value==maxi) {
                freq++;
            }
        }

        ll ans;
        if(freq > 1) {
            ans=maxi;
        } else {
            ans = ceil(maxi/2.0);
            for(auto val: map) {
                ll key=val.first;
                ll value=val.second;
                if(value==maxi) {continue;}
                if(value > ans) {
                    ans=value;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}