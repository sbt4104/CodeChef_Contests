#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

bool check(char ch) {
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
        return false;
    }
    return true;
}
int main() {
    ll test,len;
    string word;
    cin>>test;
    while(test--) {
        cin>>len;
        cin>>word;
        ll count=0, index=0;
        bool flag=true;
        while(index<len) {
            if(check(word[index])) {
                count++;
            } else {
                count=0;
            }

            if(count >=4 ){
                flag=false;
                break;
            }
            index++;
        }
        cout<<(flag ? "YES\n" : "NO\n");
    }
    return 0;
}