//http://codeforces.com/contest/1366/problem/0
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
        int a, b;
        cin>>a>>b;
        if(a>b) swap(a, b);
        if(a==0 || b==0) cout<<0<<endl;
        else if(b>=2*a) cout<<a<<endl;
        else{
            int x = (2*b-a)/3;
            int y = b - 2*x;
            x += (a-x)/2;
            cout<<x<<endl;
        }
    }
    
    return 0;
}