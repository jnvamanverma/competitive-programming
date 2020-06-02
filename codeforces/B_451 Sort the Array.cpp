//https://codeforces.com/problemset/problem/451/B
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
    int n, l=-1, r=-1;
    cin>>n;
    vector<int> A(n);
    for(int &x: A) cin>>x;
    for(int i=0; i<n-1; i++){
        if(A[i]>A[i+1] && l==-1) l=i;
        else if(A[i]<A[i+1] && l>=0){
            r = i; break;
        } 
    }
    if(l==-1) cout<<"yes\n1 1\n";
    else{
        if(r==-1) r=n-1;
        sort(A.begin()+l, A.begin()+r+1);
        bool flag=true;
        iloop(i, 0, n-1) if(A[i]>A[i+1]) flag=false;
        if(flag) cout<<"yes"<<endl<<l+1<<" "<<r+1<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}