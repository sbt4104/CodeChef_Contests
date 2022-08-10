#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,n;
    cin>>test;
    while(test--) {
        cin>>n;
       ll count =  __builtin_popcount(n);
        count--;
       cout<<count<<endl;
    }
    return 0;
}