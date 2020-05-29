//https://codeforces.com/contest/1350/problem/B
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
    while (test--)
    {
        cin>>n;
        vector<int> A(n+1, 0), LIS(n+1, 1);
        loop(i, 1, n+1) cin>>A[i];
        for(int i=1; i<=n; i++){
            for(int j=i*2; j<=n; j+=i){
                if(A[i]<A[j]) LIS[j] = max(LIS[j], LIS[i]+1);
            }
        }
        cout<<*max_element(LIS.begin()+1, LIS.end())<<endl;
    }
    
    return 0;
}