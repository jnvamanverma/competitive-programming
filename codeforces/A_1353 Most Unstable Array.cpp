//https://codeforces.com/contest/1353/problem/0
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

int main()
{
    fast;
    ll test, n, m, ans, p;
    test = readint();
    while (test--)
    {
        n = readint();
        m = readint();
        if(n<2) cout<<0<<endl;
        else if(n==2) cout<<m<<endl;
        else cout<<2*m<<endl;
        // else{
        //     p = n/2;
        //     ans = (n-1)*(m/p);
        //     if(m%p) ans += m/p;
        //     cout<<ans<<endl;
        // }
    }
    
    return 0;
}