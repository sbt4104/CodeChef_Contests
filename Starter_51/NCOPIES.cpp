#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,n,m;
    string str;
    cin>>test;
    while(test--) {
        cin>>n>>m;
        cin>>str;
        vector<ll> vec(n+1), prefixSum(n+1,0);
        for(ll index=1; index<=n; index++) {
            vec[index]=str[index-1]-'0';
            prefixSum[index] = prefixSum[index-1] + vec[index];
        }

        //cout<<"prefix[n]: "<<prefixSum[n]<<endl;
        ll count=0;
        for(ll index=1; index<=n; index++) {
            ll pre=prefixSum[index];
            ll suf=prefixSum[n] - prefixSum[index];
            if(pre == 0 && suf==0) {
                count += m;
                continue;
            }
            ll a=(suf-pre+prefixSum[n]*(m-1));
            ll b = 2*prefixSum[n];
            ll X = a/b;
            //cout<<"index: "<<index<<" prefix: "<<pre<<" suffix: "<<suf<<" X: "<<X<<endl;
            if(X<m && X>=0 && a%b==0) {
                count++;
            }
        }

        cout<<count<<endl;
    }
    return 0;
}