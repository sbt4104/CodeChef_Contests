#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,N;
    cin>>test;
    while(test--) {
        cin>>N;
        vector<ll> vec(N);
        ll maxi = -1;
        unordered_map<ll, ll> mp;
        for(ll index=0; index<N; index++) {
            cin>>vec[index];
            mp[vec[index]]++;
            maxi = max(maxi, vec[index]);
        }
        ll count=0, encounter;
        bool allGroup2=true;
        for(auto num: mp) {
            ll value=num.second;
            if(value==1) {
                count++; encounter=num.first;
            }
            if(value!=2 && num.first!=maxi) {
                allGroup2=false;
            }
        }

        if(count==1 && encounter==maxi && allGroup2==true) {
            cout<<2<<endl;
            continue;
        }
        count = ceil(count/2.0);
        cout<<count<<endl;
    }
    return 0;
}