#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ll test, size;
    cin>>test;
    while(test--) {
        cin>>size;
        vector<ll> B(size), A(size);
        ll sum=0;
        for(ll index=0; index<size; index++) {
            cin>>B[index];
            sum += B[index];
        }

        sum = sum/(size+1);
        for(ll index=0; index<size; index++) {
            ll val=B[index]-sum;
            cout<<val<<" ";
        }
        cout<<endl;
    }
    return 0;
}

