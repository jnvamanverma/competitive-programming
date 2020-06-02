//https://codeforces.com/problemset/problem/230/B
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
    int n; cin>>n;
    ll num, temp;
    while(n--){
        cin>>num;
        bool flag = true;
        if(num<=3) flag = false;
        else{
            temp = int(sqrt(double(num)));
            if(temp<2 || temp*temp != num) flag = false;
            else{
                for(int i=2; i*i <= temp; i++){
                    if(temp%i==0){
                        flag = false;
                        break;
                    }
                }
            }
        }
        
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}