#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,N;
    cin>>test;
    while(test--) {
        cin>>N;
        vector<ll> vec(N);
        ll mark1=-1;
        ll markN=-1;
        for(ll index=0; index<N; index++) {
            cin>>vec[index];
            if(vec[index]==1) {mark1=index;}
            if(vec[index]==N) {markN=index;}
        }
        ll ans=mark1-markN+N-1;
        if(markN<mark1) {
            ans--;
        }
        cout<<ans<<endl;
    }
    return 0;
}