#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,n;
    cin>>test;
    while(test--) {
        cin>>n;
        if(n==3) {
            cout<<"3 2 1\n";
            continue;
        } else if(n==4) {
            cout<<"3 2 1 4\n";
            continue;
        }
        vector<ll> vec(n);
        vec[0]=n, vec[n-1]=n-1, vec[1]=n-2, vec[n-2]=n-3;
        for(ll index=2; index<n-2; index++) {
            vec[index] = index-1;
        }

        for(ll index=0; index<n; index++) {
            cout<<vec[index]<<" ";
        }
        cout<<endl;
    }
    return 0;
}