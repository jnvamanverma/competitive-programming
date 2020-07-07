//http://codeforces.com/contest/1367/problem/C
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
        int n, k, x, ans=0, dis=0;
        cin>>n>>k;
        string s; cin>>s;
        bool flag = true;
        for(int i=0; i<n; i++){
            if(i==0 && s[i]=='0') dis=k+1;
            else if(s[i]=='1'){
                dis = 0; flag = false;
            }
            else dis++;
            if(dis==2*k+1){
                ans++; dis = k;
            }
        }
        if(dis>k) ans++;
        if(flag){
            if(n<=k) cout<<1<<endl;
            else cout<<ceil((float)n/(k+1))<<endl;
        }
        else cout<<ans<<endl;
    }
    
    return 0;
}