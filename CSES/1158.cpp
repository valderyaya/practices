//#pragma GCC optimize("Ofast,unroll-loops,no-stack-protector,fast-math")
#include<bits/stdc++.h>
//#include<bits/extc++.h>
//using namespace __gnu_pbds;
using namespace std;
#define F first
#define S second
typedef long long ll;
#define REP(i,n) for(register int i=0;i<(n);++i)
#define REP1(i,a,b) for(register int i=(a);i<=(b);++i)
#define em emplace_back
#define mkp make_pair
#define pb push_back
#define ALL(x) (x).begin(),(x).end()
#define pii pair<int,int>
#define pll pair<ll,ll>
#define Aincrad ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define lb(x) (x&-x)
 
int n,m,dp[100005];
pii a[1005];
signed main(){Aincrad
    cin>>n>>m;
    REP1(i,1,n) cin>>a[i].F;
    REP1(i,1,n) cin>>a[i].S;
    REP1(i,1,n)
        for(int j=m;j>=a[i].F;--j) dp[j]=max(dp[j],dp[j-a[i].F]+a[i].S);
    cout<<dp[m]<<"\n";
    return 0;
}
