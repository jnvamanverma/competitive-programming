//https://www.hackerrank.com/contests/all-india-contest-by-coding-club-india-30-may-2020/challenges/short-name-confusion
#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define mod 1000000007 
#define loop(i,a,b,c) for(long long int i=a; i<b; i+=c)
#define rloop(i,a,b,c) for(long long int i=a; i>b; i-=c)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
    fast;
    int t;
    cin>>t;
    set<char> st;
    bool flag = false;
    while(t--){
        string s;
        getline(cin, s);
        if(st.find(s[0]) == st.end()) st.insert(s[0]);
        else{
            flag = true;
        }
    }
    if(flag)cout<<"OH SHIT"<<endl;
    else cout<<"ALL IZZ WELL"<<endl;
    return 0;
}