#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define F first
#define S second
#define REP(i,n) for(int i=0;i<(n);i++)
#define REP1(i,a,b) for(int i=(a);i<=(b);i++)
#define em emplace_back
#define ALL(x) (x).begin(),(x).end()
#define mkp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define Rosario ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define lb(x) (x&-x)


int sum,n,m,q,a[205],b[55];
int main(){//Rosario
    cin>>n>>m>>q;
    REP(i,q) cin>>a[i];
    if(n>=q){cout<<q<<"\n";return 0;}
    sort(a,a+q);sum=a[q-1]-a[0]+1;
    REP(i,q-1) b[i]=a[i+1]-a[i];
    sort(b,b+q-1,greater<int>());
    REP(i,n-1) sum-=b[i]-1;
    cout<<sum<<"\n";
//    system("pause");
    return 0;
}
