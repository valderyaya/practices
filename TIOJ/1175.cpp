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
#define pii pair<int,int>
#define mkp make_pair
#define Rosario ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
//#define lb(x) (x&(-x)) 

int n,m;
vector<int> v;
int main(){Rosario
    cin>>n>>m;v.em(m);
    while(--n){
        cin>>m;
        if(m>v.back()) v.em(m);
        else v[lower_bound(ALL(v),m)-v.begin()]=m;
    }cout<<v.size()<<"\n";
//    system("pause");
    return 0;
}
