#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,n,x;
    cin>>test;
    while(test--) {
        cin>>n>>x;
        if(x<n) {
            cout<<-1<<endl;
            continue;
        }

        ll first = x-(n-1);
        cout<<first<<" ";
        for(ll index=1; index<=n; index++) {
            if(index==first) {continue;}
            cout<<index<<" ";
        }
        cout<<endl;
    }
    return 0;
}