//https://codeforces.com/problemset/problem/454/B
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
    int n, ans=0;
    cin>>n;
    vector<int> A(n);
    for(int &x: A) cin>>x;
    for(int i=0; i<n-1; i++){
        if(A[i]>A[i+1]){
            if(ans == 0) ans++;
            else{
                ans = -1; break;
            } 
        }
        else{
            if(ans>0) ans++;
        } 
    }
    if(ans > 0 && A[n-1]>A[0]) ans = -1;
    cout<<ans<<endl;
    return 0;
}