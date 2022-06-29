#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ll test, size;
    cin>>test;
    while(test--) {
        cin>>size;
        vector<int> B(size), A(size);
        for(int index=0; index<size; index++) {
            cin>>B[index];
        }

        A[0]=2;
        for(int index=1; index<size; index++) {
            A[index] = (B[index-1]==0) ? A[index-1] : A[index-1]%2 + 1;
        }

        /*
        cout<<"A array\n";
        for(int index=0; index<size; index++) {
            cout<<A[index]<<" ";
        }

        cout<<endl;
        */
        if((A[size-1]+A[0])%2 == B[size-1]) {
            cout<<"YES\n" ;               
        } else {
            cout<<"NO\n";
        }
    }
    return 0;
}

