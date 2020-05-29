//http://codeforces.com/contest/1358/problem/A
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
    ll test, N, M;
    cin>>test;
    while (test--)
    {
        cin>>N>>M;
        cout<<int(ceil(double(N*M)/2))<<endl;
    }
    
    return 0;
}