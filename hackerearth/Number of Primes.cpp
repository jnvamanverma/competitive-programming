// https://www.hackerearth.com/practice/math/number-theory/basic-number-theory-2/tutorial/
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
    int n;
    cin>>n;
    vector<bool> A(n+1, true);
    A[0]=A[1]=false;
    for(int i=2; i*i<=n; i++){
        if(A[i]) for(int j=i*i; j<=n; j+=i) A[j]=false;
    }
    cout<<accumulate(A.begin(), A.end(), 0);
    return 0;
}