//https://www.hackerrank.com/contests/hack-the-interview-iv-apac/challenges/optimal-path-1
#include<bits/stdc++.h>
using namespace std;

bool dfs(vector<vector<int>> &A, int c){
    
    int n=A.size(), m=A[0].size(), ans;
    vector<vector<bool>> V(n, vector<bool>(m, false));
    stack<pair<int, int>> s;
    s.push({0, 0});

    while(!s.empty()){
        pair<int, int> p = s.top(); s.pop();
        V[p.first][p.second] = true;
        
        //left
        if(p.second-1 >= 0 && !V[p.first][p.second-1] && abs(A[p.first][p.second]-A[p.first][p.second-1])<=c) s.push({p.first, p.second-1});
        //right
        if(p.second+1 < m && !V[p.first][p.second+1] && abs(A[p.first][p.second]-A[p.first][p.second+1])<=c) s.push({p.first, p.second+1});
        //top
        if(p.first-1 >= 0 && !V[p.first-1][p.second] && abs(A[p.first][p.second]-A[p.first-1][p.second])<=c) s.push({p.first-1, p.second});
        //bottom
        if(p.first+1 < n && !V[p.first+1][p.second] && abs(A[p.first][p.second]-A[p.first+1][p.second])<=c) s.push({p.first+1, p.second});

    }
    return V[n-1][m-1];
}

int main(){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> A(n, vector<int>(m));

    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>A[i][j];
    
    int left=0, right = 1000000, mid;
    while(left<right){
        mid = (right+left)/2;
        if(dfs(A, mid)){
            right = mid;
        }
        else{
            left=mid+1;
        }
    }
    cout<<left<<endl;
    return 0;
}