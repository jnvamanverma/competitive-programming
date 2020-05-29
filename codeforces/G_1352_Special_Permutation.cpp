//https://codeforces.com/contest/1352/problem/G
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
    int test, n;
    cin>>test;
    while(test--){
        cin>>n;
        if(n >= 4){
            for(int i=n%2?n:n-1; i>=1; i-=2) cout<<i<<" ";
            cout<<4<<" "<<2<<" ";
            for(int i=6; i<=n; i+=2) cout<<i<<" ";
        }
        else{
            cout<<-1;
        }
        cout<<endl;
    }
    return 0;
}