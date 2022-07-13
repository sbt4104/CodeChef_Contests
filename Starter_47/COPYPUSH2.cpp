#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

bool solve(string str) {
    ll len = str.length();
    if(len<=1 ) {
        return true;
    }
    if(len%2==1) {
        return solve(str.substr(0,len-1));
    }
    if(str.substr(0,len/2) == str.substr(len/2, len/2)) {
        return solve(str.substr(0,len/2));
    }
    return false;
}

int main() {
    ll test, N;
    string str;
    cin>>test;
    while(test--) {
        cin>>N;
        cin>>str;
        if(solve(str)) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}