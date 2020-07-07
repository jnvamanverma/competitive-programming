//http://codeforces.com/contest/1374/problem/C
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
    int test; cin>>test;
    while (test--)
    {
        int n, ans=0; string s;
        cin>>n;
        cin>>s;
        stack<char> st, st1;
        iloop(i, 0, n){
            if(s[i]=='(') st.push('(');
            else{
                if(st.empty()) ans++;
                else st.pop();
            }
        }
        cout<<ans<<endl;
    }
    
    return 0;
}