//https://www.codechef.com/COOK119B/problems/PERCAPTA
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
    int test; cin>>test;
    while (test--)
    {
        int n, m, x, y;
        
        vector<int> A(n);
        for(int &x: A) cin>>x;
        
        vector<float> avg(n);
        float max_avg = 0;
        iloop(i, 0, n){
            cin>>x;
            avg[i] = (float)A[i]/x;
            max_avg = max(max_avg, avg[i]);
        } 
        map<int, vector<int>> graph;
        iloop(i, 0, m){
            cin>>x>>y; x--; y--;
            if(avg[x]==max_avg){
                graph[x].push_back(y);
                graph[y].push_back(x);
            }
        }
        vector<bool> vis(n, false);
        vector<int> ans, temp;
        
        iloop(i, 0, n){
            queue<int> q;
            temp.clear();
            if(!vis[i] && avg[i]==max_avg) q.push(i);
            vis[i] = true;
            while (!q.empty())
            {   
                x = q.front(); q.pop();
                temp.push_back(x);
                for(int i=0; i<graph[x].size(); i++){
                    if(!vis[graph[x][i]]){
                        q.push(graph[x][i]);
                        vis[graph[x][i]] = true;
                    }
                }
            }
            if(temp.size()>ans.size()){
                ans.clear();
                for(int x: temp) ans.push_back(x);
            }
        }
        cout<<ans.size()<<endl;
        for(int x: ans) cout<<x<<" ";
        cout<<endl;
    }
    
    return 0;
}