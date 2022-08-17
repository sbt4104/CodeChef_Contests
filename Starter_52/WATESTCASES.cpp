#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,n;
    string str;
    cin>>test;
    while(test--) {
        cin>>n;
        vector<ll> vec(n);
        ll ans=-1;
        for(ll i=0; i<n; i++) {
            cin>>vec[i];
        }
        cin>>str;
        for(ll i=0; i<n; i++) {
            if(str[i]=='0') {
                if(ans==-1) {
                    ans=vec[i];
                } else {
                    if(vec[i] < ans) {
                        ans=vec[i];
                    }
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}