//#pragma GCC optimize("Ofast")
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
#define REP(i,n) for (int i=0;i<(n);i++)
#define REP1(i,a,b) for(int i=(a);i<=(b);i++)
#define em emplace_back
#define ALL(x) (x).begin(),(x).end()
#define F first
#define S second
#define mkp make_pair
#define pii pair<int,int>
#define oi ios::sync_with_stdio(0),cin.tie(0);
#define pll pair<ll,ll> 
//#define lb(x) (x&-x)

int c=0,n,m,a[10005];
int main(){
    oi;
    cin>>n>>m;
    REP(i,n) cin>>a[i];
    do{
        c++;
    }while(next_permutation(a,a+n)&&c<m);
    REP(i,n) cout<<a[i]<<' ';
//    system("pause");
    return 0;
}
