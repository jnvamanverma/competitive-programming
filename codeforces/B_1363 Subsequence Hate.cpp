//http://codeforces.com/contest/1363/problem/B
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
    int test;
    cin>>test;
    while (test--)
    {
        int zero=0, one=0, tzero=0, tone=0, n, ans=INT_MAX;
        string s;
        cin>>s; n=s.length();
        for(int i=0; i<n; i++) if(s[i]=='0') tzero++; else tone++;
        for(int i=0; i<n; i++){
            if(s[i]=='0') zero++; else one++;
            ans = min(ans, one+tzero-zero);
            ans = min(ans, zero+tone-one);
        }
        cout<<ans<<endl;
    }
    
    return 0;
}