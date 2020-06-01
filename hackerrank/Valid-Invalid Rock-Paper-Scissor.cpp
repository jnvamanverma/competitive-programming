//https://www.hackerrank.com/contests/all-india-contest-by-coding-club-india-30-may-2020/challenges/rock-paper-scissor-3-2
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
    int test;
    string a, b;
    cin>>test;
    while (test--)
    {
        map<string, int> m;
        map<string, int> :: iterator it;
        bool flag = true;
        for(int i=0; i<3; i++){
            cin>>a>>b;
            m[a]--;
            m[b]++;
            if(a==b) flag=false;
        }
        if(m.size()>3) flag=false;
        for(it = m.begin(); it != m.end(); it++){
            if(it->second) flag=false;
        }   
        if(flag) cout<<"Valid"<<endl;
        else cout<<"Invalid"<<endl;
    }
    
    return 0;
}