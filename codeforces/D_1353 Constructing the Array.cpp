//https://codeforces.com/contest/1353/problem/D
#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define mod 1000000007 
#define loop(i,a,b,c) for(long long int i=a; i<b; i+=c)
#define rloop(i,a,b,c) for(long long int i=a; i>b; i-=c)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)


struct cmp{
    bool operator() (const pair<int, int> &a, const pair<int, int> &b){
        int lna = a.second - a.first + 1;
        int lnb = b.second - b.first + 1;
        if(lna == lnb) return a.first < b.first;
        else return lna > lnb;
    }
};

int main()
{
    fast;
    int test, n;
    cin>>test;
    while (test--)
    {
        cin>>n;
        set<pair<int, int>, cmp> s;
        vector<int> A(n, 0);
        s.insert({0, n-1});
        for(int i=1; i<=n; i++){
            pair<int, int> temp = *s.begin();
            s.erase(temp);
            if(temp.first == temp.second){
                A[temp.first] = i;
            }
            else{
                int mid = (temp.second - temp.first)/2 + temp.first;
                A[mid] = i;
                s.insert({temp.first, mid-1});
                s.insert({mid+1, temp.second});
            }
        }

        for(int i=0; i<n; i++){
            cout<<A[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}