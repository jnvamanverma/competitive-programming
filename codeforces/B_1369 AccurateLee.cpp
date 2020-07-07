//http://codeforces.com/contest/1369/problem/B
#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define mod 1000000007 
#define loop(i,a,n) for(long long int i=a; i<n; i++)
#define iloop(i,a,n) for(int i=a; i<n; i++)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

bool check_ones(string s, int start, int end){
    for(int i=start; i<=end; i++){
        if(s[i]=='0') return false;
    }
    return true;
}

int main()
{
    fast;
    int test, n; cin>>test;
    while (test--)
    {
        cin>>n;
        string s; cin>>s;
        vector<char> ans;
        int i=0;
        for(; i<n; i++){
            if(s[i]=='0') ans.push_back('0');
            else break;  
        }

        if(check_ones(s, i, n-1)){
            for(; i<n; i++) ans.push_back('1');
        }
        else{
            if(i<n) ans.push_back('0');
        }
        if(i<n){
            i=n-1;
            while (s[i--]=='1')
            {
                ans.push_back('1');
            }
        }
        
        if(ans.size()==0) ans.push_back('0');
        else{
            for(char ch: ans) cout<<ch;
            cout<<endl;
        }
    }
    
    return 0;
}