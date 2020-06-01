//https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/entrance-examination-01e4a1b9/description/
//bfs
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
    ll test, n, a, b, ans, offset=1000000;
    cin>>test;
    while (test--)
    {
        cin>>n>>a>>b;
        vector<bool> V(2000001, false);
        V[offset] = true;
        queue<pair<ll, ll>> q;
        q.push({0, 0});
        ans = 0;
        while (!q.empty()){
            pair<ll, ll> p = q.front(); q.pop();
            ans++;
            if(p.second < n){
                if(!V[p.first+a+offset]){
                    V[p.first+a+offset] = true;
                    q.push({p.first+a, p.second+1});
                } 
                if(!V[p.first-b+offset]){
                    V[p.first-b+offset] = true;
                    q.push({p.first-b, p.second+1});
                }  
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}