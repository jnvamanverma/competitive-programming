//https://www.codechef.com/JUNE20B/problems/EOEO
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
        ll n, n1, temp=2, ans=0;
        cin>>n;
        n1 = n;
        if(n%2) ans = n/2;
        else {
            temp--;
            while(n%2==0){
                n /= 2;
                temp *= 2;
            } temp *= 2;
            ans = n1/temp;
        }
        cout<<ans<<endl;
    }
    
    return 0;
}