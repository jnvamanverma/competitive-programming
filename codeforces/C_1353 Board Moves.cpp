//https://codeforces.com/contest/1353/problem/C
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
    ll test, n, ans;
    cin>>test;
    while(test--){
        cin>>n;
        ans = 0; ll j=1;
        for(ll i=3; i<=n; i+=2){
            ans += (j++)*(4*i-4);
        }
        cout<<ans<<endl;
    }
    return 0;
}