//https://codeforces.com/problemset/problem/478/B
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
    ll n, m, kmax, kmin, temp;
    cin>>n>>m;
    temp = n-(m-1);
    kmax = temp*(temp-1)/2;
    temp = n/m;
    if(n%m==0){
        kmin = m*temp*(temp-1)/2;
    }
    else{
        kmin = (m-n%m)*temp*(temp-1)/2;
        temp++;
        kmin += (n%m)*temp*(temp-1)/2;
    }
    cout<<kmin<<" "<<kmax<<endl;
    return 0;
}