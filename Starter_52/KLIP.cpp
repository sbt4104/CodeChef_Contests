#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,n,k;
    string str;
    cin>>test;
    while(test--) {
        string ans="";
        cin>>n>>k;
        cin>>str;

        priority_queue<ll, vector<ll>, greater<ll>> queue;
        ll moves=n-k+1, count=0;
        for(ll i=0; i<n; i++) {
            // state changed till now
            if(count%2==1) {
                if(str[i]=='1') {str[i]='0';} else {
                    str[i]='1';
                }
            }

            if(str[i]=='1' && i<=n-k && moves>0) {
                str[i]='0';
                moves--;
                count++;
                queue.push(i+k-1);
            }

            while(!queue.empty() && queue.top()<=i) {
                queue.pop();
                count--;
            }
        }

        cout<<str<<endl;
    }
    return 0;
}