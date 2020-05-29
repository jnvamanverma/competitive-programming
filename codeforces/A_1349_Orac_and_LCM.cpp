//http://codeforces.com/contest/1349/problem/A
#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define mod 1000000007 
#define loop(i,a,b) for(int i=a;i<b;i++)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

ll gcd(ll a, ll b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
}

ll lcm(ll a, ll b){
    return (a*b)/gcd(a, b);
}

int main()
{
    fast;
    ll n, temp, h, l=1;
    cin>>n;
    vector<ll> A(n), P(n), S(n);
    for(int i=0; i<n; i++){
        cin>>A[i];
    }
    P[0] = A[0];
    S[n-1] = A[n-1];
    for(int i=1; i<n; i++){
        P[i] = gcd(A[i], P[i-1]);
        S[n-i-1] = gcd(A[n-i-1], S[n-i]);
    }
    temp=S[1];
    for(int i=1; i<n-1; i++){
        temp = lcm(temp, gcd(P[i-1], S[i+1]));
    }
    temp = lcm(temp, P[n-2]);
    cout<<temp;
    
    return 0;
}