//https://codeforces.com/contest/1352/problem/0
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test, num, rem, mul;
    vector<int> res;

    cin>>test;
    while (test--)
    {
        cin>>num;
        mul = 1;
        res.clear();
        while(num){
            rem = num%10;
            if(rem > 0) res.push_back(rem*mul);
            mul *= 10;
            num /= 10;
        }
        cout<<res.size()<<endl;
        for(int i=0; i<res.size(); i++){
            cout<<res[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}