#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,N,M,a,b;
    cin>>test;
    while(test--) {
        cin>>N>>M;
        vector<ll> vec(N+1), ans(N+1);
        vector<ll> storeLast(N+1,N);
        vector<vector<ll>> possibleVal(N+1);
        for(ll index=0; index<M; index++) {
            cin>>a>>b; 
            storeLast[a]=b;
        }

        for(ll index=1; index<=N; index++) {
            possibleVal[storeLast[index]].push_back(index);
        }

        priority_queue<ll> weights;
        bool flag=true;
        for(ll index=N; index>=1; index--) {
            for(ll pos=0; pos<possibleVal[index].size(); pos++) {
                weights.push(possibleVal[index][pos]);
            }

            if(weights.size()==0) {
                flag=false;
                break;
            }
            ans[index]=weights.top();
            weights.pop();
        }

        if(!flag) {
            cout<<-1<<endl;
            continue;
        }

        for(ll index=1; index<=N; index++) {
            cout<<ans[index]<<" ";
        }
        cout<<endl;
    }
    return 0;
}