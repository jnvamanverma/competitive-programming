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
    // code
    int N, Q, type, i, j;
    cin>>N>>Q;
    vector<vector<bool>> A(N, vector<bool>(N, false));
    vector<bool> Row(N, false);
    vector<int> S(N, 0);
    int sm = 0;
    while (Q--)
    {
        cin>>type;
        if(type==1){ //print sum of matrix
            cout<<sm<<endl;
        }
        else if(type==2){ //invert cell
            cin>>i>>j;
            i--;j--;
            A[i][j] = !A[i][j];
            S[i] += A[i][j]==Row[i] ? -1 : 1;
            sm += A[i][j]==Row[i] ? -1 : 1;
        }
        else if(type==3){ //invert row
            cin>>i;
            i--;
            sm -= S[i];
            S[i] = N - S[i];
            sm += S[i];
            Row[i] = Row[i] ? false : true;
        }
    }
    
    return 0;
}