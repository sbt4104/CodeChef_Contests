#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,n;
    cin>>test;
    while(test--) {
        cin>>n;
        for(ll i=n; i>=1; i--) {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}