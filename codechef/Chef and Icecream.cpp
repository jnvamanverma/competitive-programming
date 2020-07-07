//https://www.codechef.com/JUNE20B/problems/CHFICRM
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
    int test, n, x; cin>>test;
    while (test--)
    {
        cin>>n;
        vector<int> A(2, 0);
        bool flag = true;
        for(int i=0; i<n; i++){
            cin>>x;
            if(x==5) A[0]++;
            else if(x==10 && A[0]>0){
                A[0]--; A[1]++;
            }
            else if(x==15){
                if(A[1]>0) A[1]--;
                else if(A[0]>=2) A[0]-=2;
                else flag = false;
            }
            else flag = false; 
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    
    return 0;
}