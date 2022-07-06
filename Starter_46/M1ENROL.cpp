#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main() {
    ll test,X,Y;
    cin>>test;
    while(test--) {
        cin>>X>>Y;
        ll ans=Y-X;
        ans = max(ans,(ll)0);
        cout<<ans<<endl;
    }
    return 0;
}