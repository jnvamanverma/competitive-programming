#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define mod 1000000007 
#define loop(i,a,b,c) for(long long int i=a; i<b; i+=c)
#define rloop(i,a,b,c) for(long long int i=a; i>b; i-=c)
#define iloop(i,a,b,c) for(int i=a; i<b; i+=c)
#define irloop(i,a,b,c) for(int i=a; i>b; i-=c)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

int root(vector<int> &A, int i){
    while (A[i] != i)
    {
        A[i] = A[A[i]];
        i = A[i];
    }
    return i;
}

void uniondj(vector<int> &Arr, int A, int B, vector<int> &S){
    int rootA = root(Arr, A);
    int rootB = root(Arr, B);
    if(rootA != rootB){
        if(S[rootA] >= S[rootB]){
            Arr[rootB] = rootA;
            S[rootA] += S[rootB];
        }
        else if(S[rootA] < S[rootB]){
            Arr[rootA] = rootB;
            S[rootB] += S[rootA];
        }
    }
    
}

int main()
{
    fast;
    // code
    int N, M, A, B;
    cin>>N>>M;
    vector<int> Arr(N+1), S(N+1, 1); S[0] = 0;
    iloop(i, 1, N+1, 1) Arr[i] = i; 
    while (M--)
    {
        cin>>A>>B;
        uniondj(Arr, A, B, S);
        vector<int> ans;
        iloop(i, 1, N+1, 1) if(Arr[i]==i) ans.push_back(S[i]);
        sort(ans.begin(), ans.end());
        iloop(i, 0, ans.size(), 1) cout<<ans[i]<<" ";
        cout<<endl;
    }
    
    return 0;
}