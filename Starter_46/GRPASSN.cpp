#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main() {
    ll test,N;
    cin>>test;
    while(test--) {
        cin>>N;
        vector<ll> ans(N);
        unordered_map<ll,ll> map;
        for(ll index=0; index<N; index++) {
            cin>>ans[index];
            map[ans[index]]++;
        }
        bool flag=false;
        for(auto mp: map) {
            if(mp.second%mp.first!=0) {
                cout<<"NO\n";
                flag=true;
                break;
            }
        }
        if(!flag) {cout<<"YES\n";}
    }
    return 0;
}