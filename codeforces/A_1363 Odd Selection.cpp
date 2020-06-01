// http://codeforces.com/contest/1363/problem/0
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
    int test, n, x, temp, even, odd;
    cin>>test;
    while (test--)
    {
        cin>>n>>x;
        odd = 0; even = 0;
        for(int i=0; i<n; i++){
            cin>>temp;
            if(temp%2) odd++;
            else even++;
        }
        temp = odd>=x ? x : odd;
        if(odd == 0) cout<<"No";
        else if(temp%2 && even >= x-temp) cout<<"Yes";
        else if(even >= x - --temp && temp%2) cout<<"Yes";
        else cout<<"No";
        cout<<endl;

    }
    
    return 0;
}