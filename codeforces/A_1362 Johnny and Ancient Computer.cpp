//https://codeforces.com/contest/1362/problem/0
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
    ll test, a, b, ans;
    cin>>test;
    while (test--)
    {
        cin>>a>>b;
        ans = 0;
        if(a>b) swap(a, b);
        if(b%a==0){
            b /= a;
            while(b>1){
                if(b%8==0) b /= 8;
                else if(b%4==0) b /= 4;
                else if(b%2==0) b /= 2;
                else {ans=-1; break;}
                ans++;
            }
        }
        else{
            ans = -1;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}