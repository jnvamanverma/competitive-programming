//https://codeforces.com/contest/1352/problem/B
#include<bits/stdc++.h>
using namespace std;
int main(){
    int test, n, k;
    cin>>test;
    while (test--)
    {
        cin>>n>>k;
        if((n-k)%2==0 && (n-k)>=0){
            cout<<"YES"<<endl;
            cout<<n-k+1<<" ";
            for(int i=1; i<k; i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else if((n-2*k)%2==0 && (n-2*k)>=0){
            cout<<"YES"<<endl;
            cout<<n-2*k+2<<" ";
            for(int i=1; i<k; i++){
                cout<<2<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    
    return 0;
}