#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,n;
    cin>>test;
    while(test--) {
        cin>>n;
        vector<ll> vec(n+1);
        ll mid = n/2, end=n;

        if(n%2==1) {
            vec[n]=n;
            n--;
        }
        for(ll index=n; index>=1; index--) {
            //cout<<"index: "<<index<<" mid: "<<mid<<endl;
            vec[index]=mid;
            if(index%2==0) {mid += n-index+1;} else {mid -= n-index+1;}
        }

        for(ll index=1; index<=end; index++) {
            cout<<vec[index]<<" ";
        }
        cout<<endl;
    }
    return 0;
}