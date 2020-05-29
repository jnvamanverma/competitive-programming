//https://codeforces.com/contest/1352/problem/E
#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define mod 1000000007 
#define loop(i,a,b) for(int i=a;i<b;i++)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
    // fast;
    ll test, n, temp;
    cin>>test;

    vector<int> A;

    while(test--){
        cin>>n;
        A.clear();
        for(int i=0; i<n; i++){
            cin>>temp;
            A.push_back(temp);
        }
        int ttl=0, left=0, cnt=0;
        for(int i=0; i<n; i++){
            ttl=0; left=0;
            for(int j=0; j<n; j++){
                ttl += A[j];
                while(ttl > A[i]) ttl -= A[left++];
                if(ttl == A[i] && j-left+1>1){
                    cnt++;
                    break;
                }
            }
        }
        cout<<cnt<<endl;
    }
    
    return 0;
}