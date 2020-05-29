//http://codeforces.com/contest/1359/problem/B
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
    ll test, n, m, x, y, c=0, ans = 0;
    char ch=0;
    cin>>test;
    while (test--)
    {
        cin>>n>>m>>x>>y;
        ans = 0;
        if(y>2*x) y = 2*x;
        loop(i, 0, n, 1){
            c = 0;
            loop(j, 0, m, 1){
                cin>>ch;
                if(ch=='*'){
                    if(c==1) ans += x;
                    else if(c==2) ans += y;
                    c=0;
                }
                else{
                    c++;
                    if(c==2){
                        ans += y;
                        c = 0;
                    }
                }
            }
            if(c==1) ans += x;
            else if(c==2) ans += y;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}