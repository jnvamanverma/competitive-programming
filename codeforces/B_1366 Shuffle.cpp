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
        int n, x, m, l, r, y;
        cin>>n>>x>>m;
        y = x;
        for(int i=0; i<m; i++){
            cin>>l>>r;
            if(x>=l && x<=r) x = min(l, x);
            if(y>=l && y<=r) y = max(r, y);
        }
        cout<<y-x+1<<endl;
    }
    
    return 0;
}