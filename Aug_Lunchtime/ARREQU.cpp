#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,n;
    cin>>test;
    while(test--) {
        cin>>n;
        vector<ll> vec(n);
        unordered_map<ll,ll> mp;
        ll maxi=0;
        for(ll i=0; i<n; i++) {
            cin>>vec[i];
            mp[vec[i]]++;
            if(mp[vec[i]] > maxi) {
                maxi=mp[vec[i]];
            }
        }
        if(maxi > ceil(n/2.0)) {
            cout<<"NO\n";
        } else {
            cout<<"YES\n";
        }
    }
    return 0;
}