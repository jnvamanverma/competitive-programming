//http://codeforces.com/contest/1374/problem/B
#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define mod 1000000007 
#define loop(i,a,n) for(long long int i=a; i<n; i++)
#define iloop(i,a,n) for(int i=a; i<n; i++)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

pair<int, int> checkFactors(ll n){
    pair<int, int> p = {0, 0};
    while (n%2==0)
    {
        n /= 2;
        p.first++;
    }
    while (n%3==0)
    {
        n /= 3;
        p.second++;
    }
    // cout<<p.first<<" "<<p.second<<endl;
    if(n>1 || p.first > p.second) p = {-1, -1};
    return p;
}

int main()
{
    fast;
    // code
    int test; cin>>test;
    while (test--)
    {
        ll n; cin>>n;
        pair<int, int> p = checkFactors(n);
        int ans = -1;
        if(n==1) ans = 0;
        else if(p.first == -1) ans = -1;
        else{
            ans  = p.second - p.first + p.second;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}