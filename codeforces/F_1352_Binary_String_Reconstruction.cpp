//https://codeforces.com/contest/1352/problem/F
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
    int test, n0, n1, n2;
    string s;
    cin>>test;
    while (test--)
    {
        cin>>n0>>n1>>n2;
        if(n2) s="1";
        else s="0";
        for(int i=0; i<n1; i++){
            if(s[i] == '0') s += "1";
            else s += "0";
        }
        for(int i=0; i<n0; i++) s.insert(1, "0");
        for(int i=0; i<n2; i++) s.insert(0, "1");
        cout<<s<<endl;

    }
    return 0;
}