//https://www.codechef.com/JUNE20B/problems/PRICECON
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
        ll test, n, k, p;
        cin>>test;
        while (test--)
        {
            cin>>n>>k;
            ll ans = 0;
            iloop(i, 0, n){
                cin>>p;
                if(p>k) ans += p-k;
            }
            cout<<ans<<endl;
        }
        
        return 0;
    }