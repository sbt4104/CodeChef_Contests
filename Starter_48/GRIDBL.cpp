#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,N,M;
    cin>>test;
    while(test--) {
        cin>>N>>M;
        ll countl = N/2;
        ll countr = M/2;
        ll areaLeft = (N*M) - (4*countl*countr);
        cout<<areaLeft<<endl;
    }
    return 0;
}