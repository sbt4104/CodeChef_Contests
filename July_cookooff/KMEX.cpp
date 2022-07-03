#include<bits/stdc++.h>

using namespace std;

int main() {
    int test, N, M, K;

    cin>>test;
    while(test--) {
        cin>>N>>M>>K;
        vector<int> vec(N);
        vector<int> map(101,0);
        for(int index=0; index<N; index++) {
            cin>>vec[index];
            map[vec[index]]++;
        }


        int count=0;
        bool flag=true;
        for(int pos=0; pos<K; pos++) {
            count+=map[pos];
            if(map[pos]==0) {
                flag=false;
                break;
            }
        }

        if(flag==false || K>M) {
            cout<<"NO\n";
            continue;
        }

        for(int pos=K+1; pos<=N; pos++) {
            count+=map[pos];
        }

        if(count < M) {
            cout<<"NO\n";
        } else {
            cout<<"YES\n";
        }
    }
    return 0;
}