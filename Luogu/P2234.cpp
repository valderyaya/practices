#include<bits/stdc++.h>
//#include<bits/extc++.h>
//using namespace __gnu_pbds;
using namespace std;
typedef long long ll;
#define F first
#define S second
#define REP(i,n) for(int i=0;i<(n);++i)
#define REP1(i,a,b) for(int i=(a);i<=(b);++i)
#define em emplace_back
#define ALL(x) (x).begin(),(x).end()
#define mkp make_pair
#define pii pair<int,int>
#define pll pair<ll,ll>
#define Rosario ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//#define lb(x) (x&-x)
#define wait system("pause");

int n,sum,x,mi;
set<int> s;
int main(){Rosario
    cin>>n>>sum;
    s.insert(sum);
    while(--n){
        cin>>x;
        auto it=s.lower_bound(x);
        mi=abs(*it-x);
        if(it!=s.begin()) mi=min(mi,abs(x-*prev(it)));
        sum+=mi;
        s.insert(x);
    }cout<<sum<<"\n";
//    system("pause");
    return 0;
}
