//http://codeforces.com/contest/1370/problem/C
#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define mod 1000000007 
#define loop(i,a,n) for(long long int i=a; i<n; i++)
#define iloop(i,a,n) for(int i=a; i<n; i++)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

bool isprime(int n){
    for(int i=3; i<=sqrt(n); i+=2){
        if(n%i==0) return false;
    }
    return true;
}

int main()
{
    fast;
    int test; cin>>test;
    while (test--)
    {
        int n; cin>>n;
        if(n==1) cout<<"FastestFinger"<<endl;
        else if(n==2 || n%2 == 1) cout<<"Ashishgup"<<endl;
        else{
            int x = 0;
            while (n%2==0)
            {
                n/=2; x++;
            }
            if(n==1) cout<<"FastestFinger"<<endl;
            else if (x>1) cout<<"Ashishgup"<<endl;
            else{
                if(isprime(n)) cout<<"FastestFinger"<<endl;
                else cout<<"Ashishgup"<<endl;
            }
        }
    }
    
    return 0;
}