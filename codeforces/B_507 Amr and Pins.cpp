//https://codeforces.com/problemset/problem/507/B
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
    double r, x1, y1, x2, y2, d;
    cin>>r>>x1>>y1>>x2>>y2;
    d = sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
    cout<<ceil(d/(2*r));
    return 0;
}