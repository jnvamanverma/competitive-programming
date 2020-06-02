//http://codeforces.com/problemset/problem/339/B
#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define mod 1000000007 
#define loop(i,a,b,c) for(long long int i=a; i<b; i+=c)
#define rloop(i,a,b,c) for(long long int i=a; i>b; i-=c)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
    fast;
    // code
    ll n, m, ndx=1, ans=0, a;
    cin>>n>>m;
    for(int i=1; i<=m; i++){
        cin>>a;
        if(a<ndx){
            ans += n+a-ndx;
            ndx = a;
        }
        else{
            ans += a-ndx;
            ndx = a;
        }
    }
    cout<<ans<<endl;
    return 0;
}