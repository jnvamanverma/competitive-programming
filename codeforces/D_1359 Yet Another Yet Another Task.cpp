//https://codeforces.com/contest/1359/problem/D
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
    int n, x, ans=0, csm=0, mx=INT_MIN, cmx=INT_MIN;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>x;
        if(x>0){
            csm += x;
            cmx = max(x, cmx);
        }
        else{
            if(csm>x)
        }
    }
    return 0;
}