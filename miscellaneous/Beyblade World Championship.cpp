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
    ll test, n;
    cin>>test;
    while (test--)
    {
        cin>>n;
        vector<ll> A(n), B(n);
        loop(i, 0, n, 1) cin>>A[i];
        loop(i, 0, n, 1) cin>>B[i];

        sort(A.begin(), A.end());
        sort(B.begin(), B.end());

        ll i=0, j=0, ans=0;
        while (i<n && j<n)
        {
            if(A[i]>B[j]){
                ans++; i++; j++;
            }
            else{
                i++;
            }
        }

        cout<<ans<<endl;

    }
    
    return 0;
}