//http://codeforces.com/contest/1370/problem/B
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
        int n, x; cin>>n;
        vector<int> odd, even;
        for(int i=1; i<=2*n; i++){
            cin>>x;
            if(x%2==1) odd.push_back(i);
            else even.push_back(i);
        }

        if(odd.size()%2){
            odd.pop_back(); even.pop_back();
        }
        else if(odd.size() >= 2){
            odd.pop_back(); odd.pop_back();
        }
        else{
            even.pop_back(); even.pop_back();
        }

        for(int i=0; i<odd.size(); i+=2){
            cout<<odd[i]<<" "<<odd[i+1]<<endl;
        }
        
        for(int i=0; i<even.size(); i+=2){
            cout<<even[i]<<" "<<even[i+1]<<endl;
        }
    }
    
    return 0;
}