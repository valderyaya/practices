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
#define pii pair<int,intt>
#define pll pair<ll,ll>
#define mkp make_pair
#define Rosario ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define lb(x) (x&-x)

int n,m;
int main(){Rosario
    while(cin>>n,n){m=n*2-1;
        REP(i,n-1){
            REP(j,m){
                if(j==m/2||j==i||j==m-i-1) cout<<'*';
                else cout<<' ';
            }cout<<"\n";
        }
        REP(i,m) cout<<'*';
        cout<<"\n";
        REP(i,n-1){
            REP(j,m){
                if(j==m/2||j==m/2-i-1||j==m/2+i+1) cout<<'*';
                else cout<<' ';
            }cout<<"\n";
        }
    }
//    system("pause");
    return 0;
}
