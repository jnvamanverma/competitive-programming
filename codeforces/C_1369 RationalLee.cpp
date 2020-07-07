//http://codeforces.com/contest/1369/problem/C
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
        int n, k; cin>>n>>k;
        vector<ll> A(n), w(k);
        for(ll &x: A) cin>>x;
        for(ll &x: w) cin>>x;

        sort(A.begin(), A.end(), greater<int>());
        sort(w.begin(), w.end());

        ll ans = 0; int i=k-1;
        for(int x: w){
            i += x-1;
            if(x>1) ans += A[i];
        }
        for(int i=0; i<k; i++){
            ans += A[i];
            if(w[i]==1) ans += A[i];
        }
        cout<<ans<<endl;
    }
    
    return 0;
}