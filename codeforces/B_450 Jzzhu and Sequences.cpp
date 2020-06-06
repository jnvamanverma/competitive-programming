//https://codeforces.com/problemset/problem/450/B
#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define mod 1000000007 
#define loop(i,a,n) for(long long int i=a; i<n; i++)
#define iloop(i,a,n) for(int i=a; i<n; i++)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
    fast;
    ll x, y, n, ans;
    cin>>x>>y>>n;
    if(n%3==0) ans = y-x;
    else if(n%3==1) ans = x;
    else if(n%3==2) ans = y;

    if(((n-1)/3)%2==1) ans *= -1;
    ans %= mod;
    if(ans<0) ans += mod;
    cout<<ans;
    return 0;
}