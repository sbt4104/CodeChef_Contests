#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,N;
    cin>>test;
    while(test--) {
        cin>>N;
        vector<ll> vec(N);
        for(ll index=0; index<N; index++) {
            cin>>vec[index];
        }

        sort(vec.begin(), vec.end());

        ll sum=0, index=0;
        while(sum < N) {
            if(sum+vec[index] >= N) {
                break;
            }
            sum += vec[index];
            index++;
        }
        cout<<min(N,index)<<endl;
    }
    return 0;
}