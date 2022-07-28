#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
class Seg{
    public:
    ll st=0,end=0,score=0;
    Seg(ll a=0, ll b=0, ll c=0) {
        st=a, end=b, score=c; 
    }
};
int main() {
    ll test,n,k;
    string str;
    cin>>test;
    while(test--) {
        cin>>n>>k;
        cin>>str;
        ll len=str.length();
        ll count1=0, count0=0;
        for(ll index=0; index<len; index++) {
            if(str[index]=='1') {
                count1++;
            } else {
                count0++;
            }
        }

        ll diff = abs(count1-count0);
        ll ans = (diff%k ? diff/k + 1: diff/k);
        cout<<ans<<endl; 
    }
    return 0;
}