#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test, len;
    string word;
    cin>>test;
    while(test--) {
        cin>>len;
        cin>>word;
        vector<ll> mp1(26,0), mp2(26,0);

        for(ll index=0; index<len; index++) {
            ll curr = word[index]-'a';
            if(index%2) {
                mp1[curr]++;
            } else {
                mp2[curr]++;
            }
        }
        bool flag=true;
        for(ll index=0; index<26; index++) {
            if(mp1[index]!=mp2[index]) {
                flag=false;
                break;
            }
        }

        cout<<(flag ? "YES\n" : "NO\n");
    }
    return 0;
}