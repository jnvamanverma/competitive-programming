//http://codeforces.com/contest/1363/problem/D
#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define mod 1000000007 
#define loop(i,a,n) for(long long int i=a; i<n; i++)
#define iloop(i,a,n) for(int i=a; i<n; i++)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

int query(int low, int high){
    int x; 
    cout<<"? "<<high-low+1<<" ";
    iloop(i, low, high+1) cout<<i<<" ";
    cout<<endl, cout.flush();
    cin>>x;
    return x;
}

int main()
{
    fast;
    int test;
    cin>>test;
    while (test--)
    {
        int n, k, c, max_num, ndx, temp;
        cin>>n>>k;
        vector<int> p(k);
        vector<vector<int>> S(k, vector<int>());
        for(vector<int> &A: S){
            cin>>c;
            A.resize(c);
            for(int &x: A) cin>>x;
        }
        max_num = query(1, n);
        int low=1, high=n, mid;
        while (low<=high)
        {
            mid = (low+high)/2;
            if(max_num==query(low, mid)) high = mid-1;
            else low = mid+1;
        }
        ndx = low;
        iloop(i, 0, k){
            if(find(S[i].begin(), S[i].end(), ndx)==S[i].end()) p[i] = max_num;
            else{
                unordered_set<int> s(S[i].begin(), S[i].end());
                cout<<"? "<<n-S[i].size()<<" ";
                iloop(j, 1, n+1) if(s.find(j)==s.end()) cout<<j<<" ";
                cout<<endl, cout.flush();
                cin>>p[i];
            }
        }//3 4 1 2
        cout<<"! ";
        for(int &x: p) cout<<x<<" ";
        cout<<endl, cout.flush();
        string str; cin>>str;
        if(str=="Incorrect") return 0;
    }
    
    return 0;
}