//http://codeforces.com/contest/1359/problem/0
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
    int test, n, m, k, t, s;
    cin>>test;
    while (test--)
    {
        cin>>n>>m>>k;
        t = n/k;
        if(m==0) cout<<0<<endl;
        else if(m<=t) cout<<m<<endl;
        else{
            m-=t;
            k--;
            s = ceil(float(m)/float(k));
            if(s>=t) cout<<0<<endl;
            else cout<<t-s<<endl;
        } 
    }
    
    return 0;
}