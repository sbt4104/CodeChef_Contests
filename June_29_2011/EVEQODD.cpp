#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ll test, size;
    cin>>test;
    while(test--) {
        cin>>size;
        ll val, countOdd=0, countEven=0;
        vector<ll> operations;
        for(ll index=0; index<2*size; index++) {
            cin>>val;
            val%2==1 ? countOdd++ : countEven++;
            if(val%2==0) {operations.push_back(val);}
        }

        ll ans=0;
        if(countEven <= countOdd) {
            ans = size-countEven;
        } else {
            ll counter = size-countOdd;
            for(ll index=0; index<operations.size(); index++) {
                ll curr=operations[index];
                ll count=0;
                while(operations[index]%2==0) {
                    operations[index] /= 2;
                    count++;
                }
                operations[index]=count;
            }

            sort(operations.begin(), operations.end());
            for(ll index=0; index<counter; index++) {
                ans += operations[index];
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}