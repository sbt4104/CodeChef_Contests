#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,x,y;
    cin>>test;
    while(test--) {
        cin>>x>>y;
        ll sum = x;
        ll prod = y;
        ll a = sum/2;
        ll b = a;
        if(sum%2==1) {
            b++;
        }
        //cout<<"a: "<<a<<" b: "<<b<<endl;
        ll c=b,d=b;
        // now find prod numbers
        ll rt = ceil(sqrt(prod*1.0));
        //cout<<"rt: "<<rt<<endl;
        while(rt>0) {
            if(prod%rt==0) {
                ll temp1 = rt;
                ll temp2 = prod/rt;
                //cout<<"temp1: "<<temp1<<" temp2: "<<temp2<<endl;
                if(min(temp1, temp2) > b || max(temp1, temp2) < a) {
                    c=temp1;
                    d=temp2;
                    break;
                }
            }
            rt--;
        }
        if((c <=b && c>=a) || (d <=b && d>=a)) {
                cout<<-1<<endl;
        } else {
            cout<<min(a,b)<<" "<<max(a,b)<<endl<<min(c,d)<<" "<<max(c,d)<<endl;
        }

    }
    return 0;
}