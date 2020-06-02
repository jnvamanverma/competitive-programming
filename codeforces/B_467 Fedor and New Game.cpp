//http://codeforces.com/problemset/problem/467/B
#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define mod 1000000007 
#define loop(i,a,n) for(long long int i=a; i<n; i++)
#define iloop(i,a,n) for(int i=a; i<n; i++)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

int countsetbits(int num){
    int count = 0;
    while(num){
        count++;
        num &= num-1;
    }
    return count;
}

int main()
{
    fast;
    int n, m, k, temp, ans=0;
    cin>>n>>m>>k;
    vector<int> A(m);
    for(int &x: A) cin>>x;
    cin>>temp;
    for(int x: A) if(countsetbits(x^temp)<=k) ans++;
    cout<<ans<<endl;
    return 0;
}