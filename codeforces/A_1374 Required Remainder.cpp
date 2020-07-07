//http://codeforces.com/contest/1374/problem/A
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
    int test; cin>>test;
    while (test--)
    {
        ll x, y, n;
        cin>>x>>y>>n;
        ll ans = (n/x)*x + y;
        while (ans>n)
        {
            ans -= x;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}