#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main() {
    ll test,N;
    cin>>test;
    while(test--) {
        cin>>N;
        vector<ll> ans(N);
        ll mid = ceil((float)N/2);
        ll move = N%2, val, index=1;
        ans[N-1]=mid;
        while(index<N) {
            if(move==0) {
                val = mid + ceil(index/2.0);
                move=1;
            } else {
                val = mid - ceil(index/2.0);
                move=0;
            }
            ans[N-1-index]=val;
            index++;
        }
        for(ll index=0; index<N; index++) {
            cout<<ans[index]<<" ";
        }
        cout<<endl;
    }
    return 0;
}