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
    vector<vector<pair<int, int>>> mat(m, vector<pair<int, int>>(n));
    
    mat[0][0].first = mat[0][0].second = A[0][0] ? 0 : -1;

    for(int j=1; j<n; j++){
        if(A[0][j] == 1){
            mat[0][j].first = 0; 
            mat[0][j].second = mat[0][j-1].second >=0 ? mat[0][j-1].second : j;
        }
        else{
            mat[0][j].first = mat[0][j].second = -1;
        }
    }

    for(int i=1; i<m; i++){
        if(A[i][0] == 1){
            mat[i][0].first = mat[i-1][0].first >=0 ? mat[i-1][0].first : i;
            mat[i][0].second = 0;
        }
        else{
            mat[i][0].first = mat[i][0].second = -1;
        }
    }

    for(int i=1; i<m; i++){
        for(int j=1; j<n; j++){
            if(A[i][j] == 1){
                if(A[i][j-1] == -1 && A[i-1][j] == -1){
                    mat[i][j].first = i;
                    mat[i][j].second = j;
                }
                else{
                    int max_i = max(mat[i][j-1].first, mat[i-1][j].first);
                    int max_j = max(mat[i][j-1].second, mat[i-1][j].second);
                    mat[i][j].first = max_i >= 0 ? max_i : i;
                    mat[i][j].second = max_j >= 0 ? max_j : j;
                }
            }
            else{
                mat[i][j].first = mat[i][j].second = -1;
            }
        }
    }
    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout<<mat[i][j].first<<mat[i][j].second<<" ";
        }
        cout<<endl;
    }
    return 0;
}