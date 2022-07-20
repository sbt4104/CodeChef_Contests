#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
bool sortByFirstThenSecond(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
       return (a.second > b.second);
}
  
int main() {
    ll test,N,M,a,b;
    cin>>test;
    while(test--) {
        cin>>N>>M;
        unordered_map<ll,ll> mp;
        vector<ll> vec(N+1,-1), ans(N+1,-1);
        vector<pair<ll,ll>> myPair;
        for(ll index=0; index<M; index++) {
            cin>>a>>b;
            a--, b--;
            myPair.push_back(make_pair(b,a));
        }
        sort(myPair.begin(), myPair.end(),sortByFirstThenSecond);

        bool flag=true;
        for(ll index=0; index<M; index++) {
            ll currIndex=myPair[index].first;
            ll currValue=myPair[index].second;

            if(currValue <= currIndex && ans[currValue]==-1) {
                ans[currValue]=currValue;
                vec[currValue]=currValue;
                continue;
            }

            while(currIndex>=0) {
                if(ans[currIndex]==-1) {
                    ans[currIndex]=currValue;
                    vec[currValue]=currIndex;
                    break;
                }
                currIndex--;
            }

            if(currIndex<0) {
                flag=false;
                break;
            }
        }
        if(!flag) {
            cout<<-1<<endl;
            continue;
        }

        vector<ll> rem;
        for(ll index=0; index<N; index++) {
            if(vec[index]==-1) {
                rem.push_back(index);
            }
        }
        ll pos=0;
        for(ll index=0; index<N; index++) {
            if(ans[index]==-1) {
                cout<<rem[pos]+1<<" ";
                pos++;
            } else {
                cout<<ans[index]+1<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}