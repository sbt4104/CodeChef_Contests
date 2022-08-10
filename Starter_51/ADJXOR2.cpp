    #include<bits/stdc++.h>
    using namespace std;

    typedef long long int ll;
    ll maxim(ll a, ll b, ll c, ll d) {
        return max(max(a,c), max(b,d));
    }
    const ll N_MAX=100005;
    ll dp[N_MAX][2][2];

    /*
    dp[index][i][j] = sum till index and state of last 2 indexes;
    dp[index][i][j] = maxim(dp[index-1][0][0], dp[index-1][0][1], dp[index-1][1][0], dp[index-1][1][1])

    dp[0][0][0] = dp[0][0][1] = dp[0][1][0] = dp[0][1][1]= 0;
    dp[1][0][0] = dp[][] 
    */

    int main() {
        ll test,n,x;
        cin>>test;
        while(test--) {
            cin>>n>>x;
            vector<ll> vec(n+1), sum(n+1,0);
            for(ll index=1; index<=n; index++) {
                cin>>vec[index];
            }

            dp[2][0][0] = vec[1]^vec[2];
            dp[2][1][0] = (vec[1]+x)^vec[2];
            dp[2][0][1] = vec[1]^(vec[2]+x);
            dp[2][1][1] = (vec[1]+x)^(vec[2]+x);
            
            for(ll k=3; k<=n; k++) {
                dp[k][0][0] = max(dp[k-1][0][0], dp[k-1][1][0]) + (vec[k]^vec[k-1]);
                dp[k][1][0] = max(dp[k-1][0][1], dp[k-1][1][1]) + (vec[k]^(vec[k-1]+x));
                dp[k][0][1] = max(dp[k-1][0][0], dp[k-1][1][0]) + ((vec[k]+x)^vec[k-1]);
                dp[k][1][1] = max(dp[k-1][0][1], dp[k-1][1][1]) + ((vec[k]+x)^(vec[k-1]+x));
            }

            // for(ll k=1; k<=n; k++) {
            //     cout<<dp[k][0][0]<<" "<<dp[k][0][1]<<" "<<dp[k][1][0]<<" "<<dp[k][1][1]<<endl;
            // }
            //cout<<"n: "<<n<<" x: "<<x<<endl;
            cout<<maxim(dp[n][0][0], dp[n][0][1], dp[n][1][0], dp[n][1][1])<<endl;
        }
        return 0;
    }