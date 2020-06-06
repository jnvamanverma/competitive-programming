//https://codeforces.com/problemset/problem/265/B
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
    ll n, h, ph=0, ans=0;
    cin>>n;
    iloop(i, 0, n){
        cin>>h;
        ans += abs(h-ph);
        ph = h;
    }
    ans += 2*n-1;
    cout<<ans<<endl;
    return 0;
}