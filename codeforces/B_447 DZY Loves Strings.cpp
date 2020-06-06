//https://codeforces.com/problemset/problem/447/B
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
    string s; cin>>s;
    int k, ans=0; 
    cin>>k;
    vector<int> A(26);
    for(int &x: A) cin>>x;
    iloop(i, 0, s.length()) ans += A[s[i]-'a']*(i+1);
    int mx = *max_element(A.begin(), A.end());
    iloop(i, s.length()+1, s.length()+k+1) ans += i*mx;
    cout<<ans<<endl;
    return 0;
}