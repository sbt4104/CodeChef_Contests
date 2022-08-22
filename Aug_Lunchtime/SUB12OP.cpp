#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,n;
    cin>>test;
    while(test--) {
        cin>>n;
        vector<ll> vec(n);
        for(ll i=0; i<n; i++) {cin>>vec[i];}

        for(ll i=n-2; i>=0; i--) {
            do{
                ll curr=abs(vec[i]) + abs(vec[i+1]);
                ll mutate = abs(vec[i]-1) + abs(vec[i+1]-2);
                if(mutate >= curr) {break;}
                vec[i]=vec[i]-1, vec[i+1]=vec[i+1]-2;
                i++;
            }
            while(i<n-1);
        }

        ll sum=0;
        for(ll i=0; i<n; i++) {sum+=abs(vec[i]);} 
        cout<<sum<<endl;
    }
    return 0;
}