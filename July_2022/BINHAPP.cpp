/*
CODE NOT COMPLETE
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

class MyStruct{
    public:
    ll before, after, score;
    MyStruct(ll before, ll after, ll score){
        this->before=before;
        this->after=after;
        this->score=score;
    }
    void print() {
        cout<<"before: "<<before<<" after: "<<after<<" score: "<<score<<endl;
    }
};

MyStruct process(string str) {
    ll len=str.length();
    cout<<"len: "<<len<<endl;
    vector<MyStruct> myData;
    for(ll index=0; index<len; index++) {
        ll pos=index;
        if(str[index]=='1') {
            ll count=0;
            while(index<len && str[index]=='1') {
                count++;
                index++;
            }
            myData.push_back({0,pos,count});
        }
    }
    cout<<"here2\n";
    MyStruct ans=myData[0];
    for(ll index=1; index<myData.size(); index++) {
        ll pos=index-1;
        ll diff=myData[index].after - (myData[index-1].after + myData[index-1].score);
        ll scoreIfJoined = myData[index].score + myData[index-1].score - 2*diff;
        ll prevscoreIfJoined;
        do {
            prevscoreIfJoined=scoreIfJoined;
            diff=myData[index].after - (myData[index-1].after + myData[index-1].score);
            scoreIfJoined = myData[index].score + myData[index-1].score - 2*diff;
            index++;
            cout<<"prev: "<<prevscoreIfJoined<<" curr: "<<scoreIfJoined<<endl;
        } while(index<myData.size() && scoreIfJoined >= prevscoreIfJoined);
        if(ans.score < prevscoreIfJoined) {ans = {pos,pos, prevscoreIfJoined};}
    }
    return {ans.before, len- (ans.before+ans.score), ans.score};
}
int main() {
    ll test,N,Q, len;
        cin>>N>>Q;
        vector<string> vec(N);
        vector<MyStruct> myData;
        for(ll index=0; index<N; index++) {
            cout<<"here\n";
            cin>>len;
            cin>>vec[index];
            MyStruct temp = process(vec[index]);
            cout<<"out\n";
            temp.print();
            myData.push_back(temp);
        }
        while(Q--) {

        }
    return 0;
}