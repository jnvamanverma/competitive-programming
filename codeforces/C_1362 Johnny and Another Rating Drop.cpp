//https://codeforces.com/contest/1362/problem/C
    #include <bits/stdc++.h>
    using namespace std;

    #define ll long long int 
    #define mod 1000000007 
    #define loop(i,a,n) for(long long int i=a; i<n; i++)
    #define iloop(i,a,n) for(int i=a; i<n; i++)
    #define endl "\n"
    #define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
    
    ll setbits(ll n){
        ll cnt=0;
        while(n){
            n &= n-1;
            cnt++;
        }
        return cnt;
    }

    int main()
    {
        fast;
        ll test, n;
        cin>>test;
        while(test--){
            cin>>n;
            cout<<2*n-setbits(n)<<endl;
        }
        return 0;
    }