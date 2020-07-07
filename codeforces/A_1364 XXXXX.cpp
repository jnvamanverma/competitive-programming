//http://codeforces.com/contest/1364/problem/A
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
    // code
    int test; cin>>test;
    while(test--){
        int n, x;
        ll sm = 0;
        cin>>n>>x;
        vector<int> A(n);
        for(int &v: A){
            cin>>v;
            sm += (long)v;
        }

        if(sm%x!=0){
            cout<<n<<endl;
            continue;
        }

        ll temp = sm;
        int i=-1;
        while (temp>0 && temp%x==0)
        {
            i++;
            temp -= A[i]; 
        }
        
        int j=A.size();
        while (sm>0 && sm%x==0){
            j--;
            sm -= A[j]; 
        }

        if(temp>0 && sm>0){
            cout<<max(n-i-1, j)<<endl;
        }
        else if(temp>0) cout<<n-i-1<<endl;
        else if(sm>0) cout<<j<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}