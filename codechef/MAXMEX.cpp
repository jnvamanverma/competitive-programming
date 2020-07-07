//https://www.codechef.com/COOK119B/problems/MAXMEX
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
        int n, m, x, ans=0;
        cin>>n>>m;
        unordered_set<int> s;
        iloop(i, 0, n){
            cin>>x;
            s.insert(x);
            if(x==m) ans--;
        }
        ans += n;
        for(int i=1; i<m; i++){
            if(s.find(i) == s.end()){
                ans = -1; break;
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}