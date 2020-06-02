//https://codeforces.com/problemset/problem/499/B
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
    int n, m;
    cin>>n>>m;
    string a, b;
    unordered_map<string, string> map;
    iloop(i, 0, m){
        cin>>a>>b;
        map[a] = (a.length()<=b.length()) ? a : b;
    }
    iloop(i, 0, n){
        cin>>a;
        cout<<map[a]<<" ";
    }
    return 0;
}