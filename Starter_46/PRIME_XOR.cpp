#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
void printAsc(ll A, ll B, ll C) {
    ll first = min(A, min(B,C));
    ll third = max(A, max(B,C));
    ll second = A+B+C - (first+third);
    cout<<first<<" "<<second<<" "<<third<<endl;
}
int main() {
    ll test,X=0,Y=0;
    cin>>test;
    while(test--) {
        cin>>X>>Y;
        ll B=2;
        ll C=B^Y;
        ll A=B^X;
        ll Z=C^A;
        if(X%2==1 || Y%2==1 || Z%2==1) {
            //cout<<"in here\n";
            printAsc(A,B,C);
            continue;
        }
        while(!(X%2==1 || Y%2==1 || Z%2==1)) {
            cout<<"here\n";
            C=B^Y;
            A=B^X;
            Z=C^A;
            if(X%2==1 || Y%2==1 || Z%2==1) {
                printAsc(A,B,C);
                break;
            }
            B++;
        }
    }
    return 0;
}