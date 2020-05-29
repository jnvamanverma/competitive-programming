//https://codeforces.com/contest/1350/problem/A
#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define mod 1000000007 
#define loop(i,a,b) for(int i=a;i<b;i++)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
    fast;
    ll test, n, k;
    cin>>test;
    while (test--)
    {
        cin>>n>>k;
        if(n%2){
            for(int i=3; i<=n; i++) 
                if(n%i==0){
                     n += i;
                     k--;
                     break;
                }
        }

        n += k*2;
        cout<<n<<endl;
    }
    
    return 0;
}