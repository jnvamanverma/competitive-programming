//http://codeforces.com/problemset/problem/266/B
#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define mod 1000000007 
#define loop(i,a,b,c) for(long long int i=a; i<b; i+=c)
#define rloop(i,a,b,c) for(long long int i=a; i>b; i-=c)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

// void modify(vector<int> &A, )

int main()
{
    fast;
    int n, t;
    cin>>n>>t;
    vector<char> A(n);
    for(char &ch: A) cin>>ch;
    while(t--){
        for(int i=0; i+1<n; i++){
            if(A[i]=='B' && A[i+1]=='G'){
                swap(A[i], A[i+1]);i++;
            }
        }
    }
    for(char ch: A) cout<<ch;
    cout<<endl;
    return 0;
}