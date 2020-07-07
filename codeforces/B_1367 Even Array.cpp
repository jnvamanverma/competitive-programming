//http://codeforces.com/contest/1367/problem/B
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
        int n, x, odd=0, even=0; cin>>n;
        for(int i=0; i<n; i++){
            cin>>x;
            if(x%2!=i%2){
                if(i%2) odd++;
                else even++;
            }
        }
        if(odd==even) cout<<odd<<endl;
        else cout<<-1<<endl;
    }
    
    return 0;
}