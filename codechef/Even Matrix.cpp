//https://www.codechef.com/JUNE20B/problems/EVENM
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
    int test, n, c=1;
    cin>>test;
    while (test--)
    {
        cin>>n;
        bool flag = true;
        c = 1;
        for(int i=0; i<n; i++){
            if(!flag)c=(i+1)*n;
            else c = i*n+1;
            for(int j=0; j<n; j++){
                if(flag)cout<<c++<<" ";
                else cout<<c--<<" ";
            }
            cout<<endl;
            flag = !flag;
        }
    }
    
    return 0;
}