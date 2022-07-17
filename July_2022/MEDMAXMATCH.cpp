#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test, N;
    cin>>test;
    while(test--) {
        cin>>N;
        vector<ll> vec1(N), vec2(N);
        for(ll index=0; index<N; index++) {
            cin>>vec1[index];
        }
        for(ll index=0; index<N; index++) {
            cin>>vec2[index];
        }
        sort(vec1.begin(), vec1.end());
        sort(vec2.begin(), vec2.end());

        vector<ll> ans;
        for(ll index=N/2; index<N; index++) {
            ll index2= N-1 - (index - (N/2));
            ll sum = vec1[index]+vec2[index2];
            //cout<<"sum: "<<sum<<endl;
            ans.push_back(sum);
        }
        cout<<*min_element(ans.begin(), ans.end())<<endl;
    }
    return 0;
}