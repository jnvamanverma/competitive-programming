//https://codeforces.com/contest/1295/problem/D
#include <bits/stdc++.h>
using namespace std;

#define ll long long int 
#define mod 1000000007 
#define loop(i,a,b) for(int i=a;i<b;i++)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

inline int readint()
{
	int res = 0;
	char c = 0;
	while(!isdigit(c))
		c = getchar();
	while(isdigit(c))
		res = res*10+c-'0', c = getchar();
	return res;	
}

vector<int> findfactors(ll n){
    vector<int> F;
    loop(i, 2, sqrt(n)+1) if(n%i==0) F.push_back(i);
    return F;
}

int main()
{
    fast;
    // code
    ll test, a, m, cnt;
    test = readint();
    while (test--)
    {
        a = readint();
        m = readint();
        cnt = 1;
        
    }
    
    return 0;
}