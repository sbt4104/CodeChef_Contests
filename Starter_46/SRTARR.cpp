#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main() {
    ll test,N;
    string str;
    cin>>test;
    while(test--) {
        cin>>N;
        cin>>str;
        ll countRev=0, count0=0, count1=0;
        for(ll index=N-1; index>=0; index--) {
            if(str[index]=='1') {
                if(count0!=0) {
                    count1++;
                    if(index==0) {countRev++;}
                }
            } else {
                if(count1!=0 && count0!=0) {
                    countRev++;
                    count0=1;
                    count1=0;
                } else{
                    count0++;
                }
            }
        }
        cout<<countRev<<endl;
    }
    return 0;
}