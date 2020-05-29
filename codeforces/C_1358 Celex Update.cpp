//http://codeforces.com/contest/1358/problem/C
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
    // code
    ll test, x1, y1, x2, y2;
    cin>>test;
    while (test--)
    {
        cin>>x1>>y1>>x2>>y2;
        cout<<(x2-x1)*(y2-y1)+1<<endl;
    }
    
    return 0;
}