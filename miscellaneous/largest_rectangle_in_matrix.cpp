#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define mod 1000000007 
#define loop(i,a,b,c) for(long long int i=a; i<b; i+=c)
#define rloop(i,a,b,c) for(long long int i=a; i>b; i-=c)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
    fast;
    int m, n;
    cin>>m>>n;
    vector<vector<int>> A(m, vector<int>(n));
    for(int i=0; i<m; i++) for(int j=0; j<n; j++) cin>>A[i][j];
    vector<int> H(n, 0);
    int area=0, tarea, tp, k;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++) H[j] = A[i][j] ? H[j]+1 : 0;
        stack<int> s;
        k = 0;
        while(k<=n){
            if(s.empty() && k==n) break;
            if(k<n && (s.empty() || H[s.top()] <= H[k])) s.push(k++);
            else{
                tp = s.top(); s.pop();
                tarea = H[tp] * (s.empty() ? k : k-s.top()-1);
                area = max(area, tarea);
            }
        }
    }
    // for(int j=0; j<n; j++) cout<<H[j]<<" "; cout<<endl;
    cout<<area<<endl;
    return 0;
}