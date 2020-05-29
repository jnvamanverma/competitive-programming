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
    ll n, ans, temp;
    cin>>n;
    vector<ll> A(n);
    loop(i, 0, n, 1) cin>>A[i];
    loop(i, 0, n, 1){
        cin>>temp;
        if(i==0) ans = temp/A[i];
        else ans = min(ans, temp/A[i]);
    }
    cout<<ans;

    return 0;
}