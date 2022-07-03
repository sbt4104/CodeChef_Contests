#include<bits/stdc++.h>

using namespace std;

int main() {
    int test, N;
    cin>>test;
    while(test--) {
        cin>>N;
        if(N==3) {
            cout<<-1<<endl;
            continue;
        }

        cout<<"3 4 1 2 ";
        for(int index=5; index<=N; index++) {
            cout<<index<<" ";
        }
        cout<<endl;
    }
    return 0;
}