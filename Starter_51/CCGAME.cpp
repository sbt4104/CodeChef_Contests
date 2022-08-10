#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,n;
    cin>>test;
    while(test--) {
        cin>>n;
        vector<ll> vec(n+1), prefixSum(n+1,0);
        for(ll index=1; index<=n; index++) {
            cin>>vec[index];
            prefixSum[index] = prefixSum[index-1] + vec[index];
        }
        if(n==1) {
            cout<<"Cook\n";
            continue;
        }
        ll moves = prefixSum[n-2];
        ll sum = vec[n-1] + moves;
        //cout<<"moves: "<<moves<<" sum: "<<sum<<endl;
        if((vec[n-1]%2==0 && moves%2==0) || (vec[n-1]%2==1 && moves%2==1)) {
            cout<<"Chef\n";
        } else {
            cout<<"Cook\n";
        }
    }
    return 0;
}