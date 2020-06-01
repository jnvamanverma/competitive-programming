//http://codeforces.com/contest/1363/problem/C
#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define mod 1000000007 
#define loop(i,a,n) for(long long int i=a; i<n; i++)
#define iloop(i, a, n) for(int i=0; i<n; i++) 
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
    fast;
    int test, n, x, u, v, c=0;
    cin>>test;
    while (test--)
    {
        cin>>n>>x;
        c=0;
        for(int i=1; i<n; i++){
            cin>>u>>v;
            if(u==x || v==x) c++;
        }
        if(c<2) cout<<"Ayush"<<endl;
        else if((n-3)%2) cout<<"Ayush"<<endl;
        else cout<<"Ashish"<<endl;
    }
    
    return 0;
}