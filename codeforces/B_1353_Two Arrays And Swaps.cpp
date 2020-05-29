//https://codeforces.com/contest/1353/problem/B
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
    ll test, n, k, sm=0;
    cin>>test;
    while (test--)
    {
        cin>>n>>k;
        vector<int> A(n), B(n);
        loop(i, 0, n){
            cin>>A[i];
        }
        loop(i, 0, n){
            cin>>B[i];
        }
        sm = 0;
        sort(A.begin(), A.end());
        sort(B.begin(), B.end(), greater<int>());
        loop(i, 0, n){
            if(i<k) sm += max(A[i], B[i]);
            else sm += A[i];
        }
        cout<<sm<<endl;
        
    }
    
    return 0;
}