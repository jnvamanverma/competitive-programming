// https://www.hackerearth.com/practice/math/number-theory/totient-function/tutorial/
#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define mod 1000000007 
#define loop(i,a,n) for(long long int i=a; i<n; i++)
#define iloop(i, a, n) for(int i=a; i<n; i++) 
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
    fast;
    int n, ans; cin>>n;
    ans = n;
    for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            while(n%i==0) n/=i;
            ans -= ans/i;
        }
    }
    if(n>1) ans -= ans/n;
    cout<<ans<<endl;
    return 0;
}