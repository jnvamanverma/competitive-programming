//http://codeforces.com/contest/1367/problem/0
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
        string str; cin>>str;
        for(int i=0; i<str.length(); i+=2){
            cout<<str[i];
        }
        cout<<str[str.length()-1]<<endl;
    }
    
    return 0;
}