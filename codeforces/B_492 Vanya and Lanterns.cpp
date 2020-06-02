//https://codeforces.com/problemset/problem/492/B
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
    int n, l, d=0;
    cin>>n>>l;
    vector<int> A(n);
    for(int &x: A) cin>>x;
    sort(A.begin(), A.end());
    iloop(i, 0, n-1){
        d = max(d, A[i+1]-A[i]);
    }
    float dis = float(d)/2.0;
    if(A[0]!=0) dis = max(float(A[0]-0), dis);
    if(A[n-1]!=l) dis = max(float(l-A[n-1]), dis);
    cout<<fixed<<setprecision(10)<<dis<<endl;
    return 0;
}