#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

const ll MAX_N = 200005;
const ll LOG = 17;
ll m1[MAX_N][LOG];
ll m2[MAX_N][LOG];
ll vec[MAX_N];

ll query1(ll a, ll b) {
    ll size = b-a+1,k=0;
    while((1<<(k+1)) <= size) {
        k++;
    }
    return min(m1[a][k], m1[b-(1<<k)+1][k]);
}

void precompute1(ll n) {
    for(ll index=1; index<LOG; index++) {
        for(ll pos=0; pos+(1<<index)-1<n; pos++) {
            m1[pos][index]=min(m1[pos][index-1], m1[pos + (1<<(index-1))][index-1]);
        }
    }
}

ll query2(ll a, ll b) {
    ll size = b-a+1,k=0;
    while((1<<(k+1)) <= size) {
        k++;
    }
    return max(m2[a][k], m2[b-(1<<k)+1][k]);
}

void precompute2(ll n) {
    for(ll index=1; index<LOG; index++) {
        for(ll pos=0; pos+(1<<index)-1<n; pos++) {
            m2[pos][index]=max(m2[pos][index-1], m2[pos + (1<<(index-1))][index-1]);
        }
    }
}

int main() {
    ll test,n;
    cin>>test;
    while(test--) {
        cin>>n;
        vector<ll> vec(n);
        unordered_map<ll,ll> mp;
        for(ll i=0; i<n; i++) {
            cin>>vec[i];
            mp[vec[i]]=i;
            m1[i][0]=vec[i];
            m2[i][0]=vec[i];
        }
        precompute1(n);
        precompute2(n);
        bool flag=true;
        ll count=0;
        ll prev=-1;
        for(ll i=0; i<n; i++) {
            ll curr=vec[i];
            ll next=mp[curr];
            ll mini=query1(i,next), maxi=query2(i,next);
            
            if(mini >= prev) {
                prev=mini;
                if(i!=next && mini!=maxi) {count++;}
                i=next;
            } else {
                flag=false;
                break;
            }
        }

        if(flag==false) {cout<<-1<<endl;} else {cout<<count<<endl;}
    }
    return 0;
}