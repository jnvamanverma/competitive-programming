#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define mod 1000000007 
#define loop(i,a,b,c) for(long long int i=a; i<b; i+=c)
#define rloop(i,a,b,c) for(long long int i=a; i>b; i-=c)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

ll d, z, y;
void extendedEuclid(ll c, ll m);
ll moduloInverse(ll n, ll m);
ll modularExponentiation(ll x, ll n, ll M);

int main()
{
    fast;
    ll A, B, C, M, ans;
    cin>>A>>B>>C>>M;
    ans = modularExponentiation(A, B, M);
    ans = (ans*moduloInverse(C, M))%M;
    cout<<ans<<endl;
    return 0;
}

ll modularExponentiation(ll x, ll n, ll M)
{   
    if(n==0) return 1;
    ll p = modularExponentiation(x,n/2,M)%M;
    p=(p*p)%M;
    if(n%2) p = (p*x)%M;
    return p%M;
}

ll moduloInverse(ll c, ll M)
{
    extendedEuclid(c,M);
    return (z%M+M)%M;
}


void extendedEuclid(ll c, ll m)
{
    if(m == 0){
        d = c;
        z = 1;
        y = 0;
    }
    else{
        extendedEuclid(m, c%m);
        ll temp = z;
        z = y;
        y = temp - (c/m)*y;
    }
}