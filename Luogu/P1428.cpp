#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define REP(i,n) for (int i=0;i<(n);i++)
#define REP1(i,a,b) for(int i=(a);i<=(b);i++)
//#define pb push_back
#define em emplace_back
#define ALL(x) (x).begin(),(x).end()
#define F first
#define S second
#define mkp make_pair


int main(){
    //ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int n,a[100];
    cin>>n;
    REP(i,n)cin>>a[i];
    cout<<0<<' ';
    REP1(i,1,n-1){
        int c=0;
        REP(j,i) if(a[j]<a[i]) c++;
        cout<<c<<' ';
    }
//    system("pause");
    return 0;
}
