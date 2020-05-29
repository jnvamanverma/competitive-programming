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
    ll test, A, B;
    cin>>test;
    while(test--){
        cin>>A>>B;
        if(A==B) cout<<0<<endl;
        else if(A%B==0 || B%A==0) cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}