#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,n;
    cin>>test;
    while(test--) {
        cin>>n;
        vector<ll> vec(n,0), summer(n+1,0), summerS(n+1,0);
        for(ll index=0; index<n; index++) {
            cin>>vec[index];
        }

        sort(vec.begin(), vec.end(), greater<ll>());
        summer[0]=0;
        summerS[n]=0;
        for(ll index=n-1; index>=0; index--) {
            summerS[index] = summerS[index+1]+vec[index];
        }
        for(ll index=1; index<=n; index++) {
            summer[index] = summer[index-1]+vec[index-1];
        }
        
        ll ans=0;
        bool flag=false;
        for(int index=0; index<=n; index++) {
            //remove index people
            ll requiredSum = (index==n ? 0 : vec[index])*(n-index) - summerS[index];
            ll sumTobeRemoved = (index==0) ? 0 : summer[index];
            if(requiredSum <= sumTobeRemoved) {
                flag=true;
                ans=index;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}   