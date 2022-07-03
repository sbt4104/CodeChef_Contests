#include<bits/stdc++.h>

using namespace std;

int main() {
    int test;
    float X;
    cin>>test;
    while(test--) {
        cin>>X;
        float ans = ceil(X/3);
        //cout<<"here: "<<ans<<endl;
        int answer = ((int)ans)*3 - X;
        cout<<answer<<endl;
    }
    return 0;
}