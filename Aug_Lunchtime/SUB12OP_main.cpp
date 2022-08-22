#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,n;
    cin>>test;
    while(test--) {
        cin>>n;
        vector<ll> vec(n);
        ll sum=0;
        for(ll i=0; i<n; i++) {cin>>vec[i]; sum+=vec[i];}

        ll x = sum/3;
        cout<<"x: "<<x<<endl;
        if(x<0) {x=0;}
        ll ans = sum-(3*x);
        cout<<ans<<endl;
    }
    return 0;
}