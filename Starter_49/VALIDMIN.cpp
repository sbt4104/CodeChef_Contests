#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,a,b,c;
    cin>>test;
    while(test--) {
        cin>>a>>b>>c;
        vector<ll> vec(20,0);
        vec[a]++;
        vec[b]++;
        vec[c]++;

        ll mini = min(min(a,b),c);
        ll maxi = max(max(a,b),c);

        if(vec[mini]>=2 && maxi>=mini) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}