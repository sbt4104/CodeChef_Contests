/*

Wrong Solution
Need Correction

*/
#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main() {
    ll test, N;
    cin>>test;
    while(test--) {
        cin>>N;
        ll storeRange[N][2];
        vector<ll> storeLies(N,0);
        for(ll index=0; index<N; index++) {
            cin>>storeRange[index][0]>>storeRange[index][1];
            storeRange[index][0]--;
            storeRange[index][1]--;
            for(ll pos=storeRange[index][0]; pos<=storeRange[index][1]; pos++) {
                storeLies[pos]++;
            }
        }

        vector<ll> ans;
        for(ll index=0; index<N; index++) {
            if((storeLies[index]==1 && ) || storeLies[index]>1 && !(index <= storeRange[index][1] && index >= storeRange[index][0])) {
                ans.push_back(index+1);
            }
        }

        cout<<ans.size()<<endl;
        for(ll index=0; index<ans.size(); index++) {
            cout<<ans[index]<<endl;
        }
    }
    return 0;
}