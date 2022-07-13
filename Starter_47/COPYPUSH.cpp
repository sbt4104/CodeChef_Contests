#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
unordered_map<string, bool> mp;

bool solve(string dummy, string str, bool singleAdded) {
    cout<<"dummy: "<<dummy<<endl;
    string mainStr=dummy;
    if(mp.find(dummy) != mp.end()) {
        return mp[dummy];
    }
    if(dummy==str) {
        mp[mainStr]=true;
        return mp[mainStr];
    }

    if(dummy.length() == str.length()) {
        return false;
    }

    if(dummy.length()==0) {
        dummy+=str[0];
        singleAdded=true;
        mp[mainStr] = solve(dummy, str, singleAdded);
        return mp[mainStr];
    }

    if(singleAdded==true) {
        //cant add single character anymore, duplicate the dummy
        string temp=dummy+dummy;
        ll len=dummy.length();
        for(ll index=len; index<temp.length(); index++) {
            if(temp[index]!=str[index]) {
                mp[mainStr]=false;
                return mp[mainStr];
            }
        }

        dummy = temp;
        singleAdded=false;
        mp[mainStr]=solve(dummy, str, singleAdded);
        return mp[mainStr];
    }

    singleAdded=true;
    bool add=true;
    bool duplicate=true;
    
    // add a single character
    string temp1=dummy+str[dummy.length()];

    // duplicate        
    string temp2=dummy+dummy;
    bool b1=0, b2=0;
    if(temp2.length() > str.length()){
        duplicate=false;
    } else {
        ll len=dummy.length();
        for(ll index=len; index<temp2.length(); index++) {
            if(temp2[index]!=str[index]) {
                duplicate=false;
                break;
            }
        }
    }
    //cout<<"dummy: "<<temp2<<endl;
    //cout<<"str00: "<<str.substr(0,temp2.length())<<endl;
    if(!add && !duplicate) {
        mp[mainStr]=false;
        return mp[mainStr];
        //break;
    } 
    if(add==true) {
        dummy=temp1;
        singleAdded=true;
        b1= solve(dummy, str, singleAdded);
    }
    if(duplicate==true) {
        dummy=temp2;
        singleAdded=false;
        b2= solve(dummy, str, singleAdded);
    }
    mp[mainStr] = b1 | b2;
    return mp[mainStr];
}

int main() {
    ll test,N;
    string str;
    cin>>test;
    while(test--) {
        cin>>N;
        cin>>str;
        ll step=0;
        string dummy="";
        bool singleAdded=false;
        mp.clear();
        bool ans=solve(dummy, str, singleAdded);
        cout<<(ans?"YES\n":"NO\n");
    }
    return 0;
}