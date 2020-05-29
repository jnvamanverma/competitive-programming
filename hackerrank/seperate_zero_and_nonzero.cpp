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
    ll n;
    cin>>n;
    vector<int> A(n);
    loop(i, 0, n, 1) cin>>A[i];
    ll zero=-1;
    loop(i, 0, n, 1){
        if(A[i]==0 && zero==-1) zero = i;
        if(A[i] && zero!=-1) swap(A[i], A[zero++]);
    }
    loop(i, 0, n, 1) cout<<A[i]<<" ";
    return 0;
}