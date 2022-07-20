#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,N;
    cin>>test;
    while(test--) {
        cin>>N;
        vector<ll> vec(N+1,0);
        vector<ll> size(N+1,0);
        for(ll index=1; index<=N; index++) {
            cin>>vec[index];
        }

        sort(vec.begin(), vec.end());
        ll ans=1;
        for(ll index=1; index<=N; index++) {
            ll currbox=1;
            while(size[currbox] >= vec[index]) {
                currbox++;
            }
            size[currbox]++;
            ans=max(ans, currbox);
            //cout<<"ans: "<<ans<<endl;
        }
        cout<<ans<<endl;
    }
    return 0;
}