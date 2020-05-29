//https://codeforces.com/contest/1352/problem/D
#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

int main(){
    fast;
    int test, n;
    long i=0, j=n-1, alice, bob, prev, temp=0, cnt=0;
    
    cin>>test;
    vector<int> A;
    while(test--){
        cin>>n;
        A.clear();
        for(int i=0; i<n; i++){
            cin>>temp;
            A.push_back(temp);
        }
        i=0;j=n-1;cnt=0;
        alice = A[i];
        prev = A[i++];
        bob = 0;
        cnt++;
        while(i<=j){
            temp=0;
            cnt++;
            while(prev>=temp && i<=j){
                temp += A[j];
                bob += A[j];
                j--;
            }
            prev = temp;
            temp = 0;
            if(i<=j) cnt++;
            while(prev>=temp && i<=j){
                temp += A[i];
                alice += A[i];
                i++;
            }
            prev=temp;
        }
        cout<<cnt<<" "<<alice<<" "<<bob<<endl;
    }

    return 0;
}