#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
int main() {
    ll test,n;
    cin>>test;
    while(test--) {
        cin>>n;
        vector<ll> vec(n,0), summer(n+1,0), summerS(n+1,0);
        ll sum=0;
        summer[0]=0;
        for(ll index=0; index<n; index++) {
            cin>>vec[index];
            sum += vec[index];
        }




        sort(vec.begin(), vec.end(), greater<ll>());
        summer[0]=vec[0];
        summerS[n-1]=vec[n-1];
        for(ll index=n-2; index>=0; index--) {
            summerS[index] = summerS[index+1]+vec[index];
        }
        for(ll index=1; index<n; index++) {
            summer[index] = summer[index-1]+vec[index];
        }

        // for(ll index=0; index<n; index++) {
        //     cout<<vec[index]<<" ";
        // }
        // cout<<endl;
        // for(ll index=0; index<n; index++) {
        //     cout<<summer[index]<<" ";
        // }
        // cout<<endl;
        ll l=0, r=0;

        // while(r>l+1) {
        //     cout<<"l: "<<l<<" r: "<<r<<endl;
        //     ll mid = (r+l)/2;
        //     cout<<"mid: "<<mid<<endl;
        //     // check how much money involved if we remove all before mid (mid inclusive)
        //     ll sumTillmid = summer[mid];
        //     ll sumReq = vec[min(n-1,mid+1)]*(n-mid-1) - summerS[min(n-1,mid+1)];
        //     cout<<"sumtillmid: "<<sumTillmid<<" sumReq: "<<sumReq<<" summerS[min(n-1,mid+1)]: "<<summerS[min(n-1,mid+1)]<<endl;
        //     if(sumReq <= sumTillmid) {
        //         r=mid;
        //     } else {
        //         l=mid;
        //     }
        // }
        
        ll sumReq=0;
        ll sumTillmid=0;
        while(sumReq <= sumTillmid && r<n) {
            //cout<<" hey r: "<<r<<endl;
            ll sumTillmid = summer[r];
            ll sumReq =  vec[r+1]*(n-1-r)-summerS[r+1];
            //cout<<"sumtillmid: "<<sumTillmid<<" sumReq: "<<sumReq<<endl;
            if(sumReq <= sumTillmid) {
                ///cout<<"in r: "<<r<<endl;
                break;
            } else {
                r++;
            }
            //cout<<"in\n";
        }
        if(r==0 && sumReq==0) {
            r--;
        }
        cout<<r+1<<endl;
    }
    return 0;
}   