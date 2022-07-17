#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,N;
    string A,B;
    cin>>test;
    while(test--) {
        cin>>N;
        cin>>A;
        cin>>B;
        bool flag1=false, flag2=false;
        for(ll index=0; index<N; index++) {
            if(A[index]=='1') {
                flag1=true; break;
            }
        }
        for(ll index=1; index<N; index++) {
            if(B[index]==B[index-1]) {
                flag2=true; break;
            }
        }
        if(A==B) {flag1=flag2=true;}
        if(flag1 && flag2) {
            cout<<"YES\n";
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}