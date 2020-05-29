#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define mod 1000000007 
#define loop(i,a,b,c) for(long long int i=a; i<b; i+=c)
#define rloop(i,a,b,c) for(long long int i=a; i>b; i-=c)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

int root_dset(vector<int> &A, int i){
    while(A[i] != i){
        A[i] = A[A[i]];
        i = A[i];
    }
    return i;
}

int main()
{
    fast;
    int N, M, A, B, ans, root_A, root_B;
    cin>>N>>M;
    vector<int> Arr(N+1);
    for(int i=1; i<=N; i++) Arr[i] = i;
    ans = N;
    while (M--)
    {
        cin>>A>>B;
        root_A = root_dset(Arr, A);
        root_B = root_dset(Arr, B);
        if(root_A != root_B){
            Arr[root_A] = Arr[root_B];
            ans--;
        }
        cout<<ans<<endl;
        
    }
    
    return 0;
}