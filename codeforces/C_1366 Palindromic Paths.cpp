//http://codeforces.com/contest/1366/problem/C
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
        int n, m;
        bool x;
        cin>>n>>m;
        vector<int> zero(m+n-1, 0);
        vector<int> one(m+n-1, 0);
        iloop(i, 0, n) iloop(j, 0, m) {
            cin>>x;
            if(x==false) zero[i+j]++;
            else one[i+j]++; 
        }
        int p = ceil(zero.size()/2);
        int ans = 0;
        for(int i=0; i<p; i++){
            ans += min(zero[i]+zero[m+n-i-2], one[i]+one[m+n-i-2]);
        }
        cout<<ans<<endl;
    }
    
    return 0;
}