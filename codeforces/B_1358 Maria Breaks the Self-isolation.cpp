//http://codeforces.com/contest/1358/problem/B
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
    int test, n;
    cin>>test;
    while(test--){
        cin>>n;
        vector<int> A(n);
        for(int &x: A) cin>>x;
        sort(A.begin(), A.end());
        int i = n-1;
        for(; i>=0; i--){
            if(A[i]<=i+1) break;
        }
        if(i<0) cout<<1<<endl;
        else cout<<i+2<<endl;
    }
    return 0;
}