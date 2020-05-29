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
    ll n, area, p_area, i, tp;
    cin>>n;
    
    vector<int> A(n);
    loop(i, 0, n, 1) cin>>A[i];
    
    stack<int> s;

    i=0; area=0;
    while(i<=n){
        if(s.empty() && i==n) break;
        if(i<n && (s.empty() || A[s.top()] <= A[i])) s.push(i++);
        else{
            tp = s.top(); s.pop();
            p_area = A[tp] * (s.empty() ? i : i-s.top()-1);
            area = max(area, p_area);
        }
    }
    cout<<area<<endl;

    return 0;
}