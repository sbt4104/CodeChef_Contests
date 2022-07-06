#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;

int main() {
    ll test,N;
    cin>>test;
    while(test--) {
        cin>>N;
        vector<ll> vec(N);
        for(ll index=0; index<N; index++) {
            cin>>vec[index];
        }
        sort(vec.begin(), vec.end(), greater<int>());
        ll attack=0, defence=0, count500=0;
        for(ll index=0; index<N/2; index++) {

                attack += vec[index];
        }
        for(ll index=N/2; index<N; index++) {
                            defence += 1000-vec[index];
        }

        ll ans = attack*defence;
        cout<<ans<<endl;
    }
    return 0;
}