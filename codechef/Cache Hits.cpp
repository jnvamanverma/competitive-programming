//https://www.codechef.com/COOK119B/problems/CACHEHIT
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
        int n, b, m, x;
        cin>>n>>b>>m;
        int ans = 0, p=-1;
        for(int i=0; i<m; i++){
            cin>>x;
            if(x/b != p)ans++;
            p = x/b;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}