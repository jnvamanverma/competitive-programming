//https://www.hackerrank.com/contests/hack-the-interview-iv-apac/challenges/maximum-or-1
#include<bits/stdc++.h>
using namespace std;

long long dp[2000][180][2],k,mod=1000000007; 
void getds(string s, vector <int> &d) 
{   
    int i=s.length()-1;
    while (i>=0) d.push_back(s[i--]-'0');
} 

long long rec(int input, int sm , int tight,vector <int> &d) 
{
    if (input == -1) return (sm ==k); 
  
    if (dp[input ][sm ][tight] != -1 and tight != 1)  return dp[input ][sm ][tight]; 
  
    long long ret = 0; 
    int k1 = (tight)? d[input ] : 9; 
  
    for (int i = 0; i <= k1; i++) 
    { 
        int newTight = (d[input ] == i)? tight : 0; 
        if(i&&sm +1>k) continue;
        ret = (ret+rec(input -1, sm +(i?1:0), newTight, d))%mod; 
    } 
  
    if (!tight) dp[input ][sm ][tight] = ret; 
  
    return ret; 
} 
  

int getNumberOfIntegers(string L, string R, int K) {
     memset(dp, -1, sizeof(dp));  k = K;
    vector<int> A; 
    getds(L,A); 
   
    long long ans1 = rec(A.size()-1, 0, 1, A); 
 
    vector<int> B; 
    getds(R,B); 
    long long ans2 = rec(B.size()-1, 0, 1,B); 
  
    return (ans2 - ans1+mod)%mod; 
}

int main(){
    string L, R;
    getline(cin, L);
    getline(cin, R);
    int k;
    cin>>k;
    cout<<getNumberOfIntegers(L, R, k)<<endl;
    return 0;
}