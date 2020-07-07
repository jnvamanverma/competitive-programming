//https://codeforces.com/contest/1348/problem/A
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
    ll test, n, a, b, i;
    cin>>test;
    while(test--){
        cin>>n;
        a = 1<<n; i = 1;
        while(i<n/2){
            a += (1<<i); i++;
        }
        b = 0;
        while (i<n)
        {
             b += (1<<i); i++;
        }
        cout<<a-b<<endl;
    }
    return 0;
}