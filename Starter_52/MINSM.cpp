#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);   
}
int main() {
    ll test,n;
    cin>>test;
    while(test--) {
        cin>>n;
        vector<ll> vec(n), visited(n,0);
        for(ll i=0; i<n; i++) {
            cin>>vec[i];
        }

        ll ans=vec[0];
        for(ll i=1; i<n; i++) {
            ans = gcd(ans, vec[i]);
        }
        cout<<ans*n<<endl;
    }
    return 0;
}