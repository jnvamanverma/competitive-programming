//https://codeforces.com/problemset/problem/508/B
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
    string s;
    cin>>s;
    int ndx = -1, n = s.length();
    for(int i=n-2; i>=0; i--){
        if(int(s[i])%2==0){
            if(ndx == -1 || s[i]<s[n-1]) ndx = i;
        }
    }
    if(ndx==-1) cout<<-1<<endl;
    else{
        swap(s[n-1], s[ndx]);
        cout<<s<<endl;
    }
    return 0;
}