//https://codeforces.com/problemset/problem/285/B
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
    int n, s, t, ans=0;
    cin>>n>>s>>t;
    vector<int> A(n);
    vector<bool> V(n, false);
    for(int &x: A) cin>>x;
    if(s==t) ans = 0;
    else{
        V[s-1] = true;
        while(s != t){
            s = A[s-1];
            if(V[s-1]){
                ans = -1; break;
            }
            else ans++;
        }
    }
    cout<<ans;
    return 0;
}