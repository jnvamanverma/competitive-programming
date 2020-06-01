//https://www.hackerrank.com/contests/all-india-contest-by-coding-club-india-30-may-2020/challenges/multiplication-made-easy
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
    // code
    ll test, num, ans;
    cin>>test;
    while(test--){
        cin>>num;
        ans = 0;
        while(num%10==0 && num>0){
            num /= 10;
            ans++;
        }
        cout<<ans<<endl;
    }

    return 0;
}