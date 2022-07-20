#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,len;
    string str;
    cin>>test;
    while(test--) {
        cin>>len;
        cin>>str;
        string ans="";
        ll count0=0;
        ll count1=0;
        for(ll index=0; index<len; index++) {
            if(str[index]=='0') {
                count0++;
            } else {
                count1++;
            }
        }

        ll count=count1;
        char ch = '1';
        if(count0 > count1) {
            ch='0';
            count=count0;
        }

        for(ll index=0; index<count; index++) {
            ans += ch;
        }
        cout<<ans<<endl;
    }
    return 0;
}