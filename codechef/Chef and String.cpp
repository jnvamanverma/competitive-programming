//https://www.codechef.com/JUNE20B/problems/XYSTR
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
        ll test, ans;
        cin>>test;
        while (test--)
        {
            string s;
            cin>>s;
            ans=0;
            for(int i=0; i<s.length()-1; i++){
                if(s[i]!=s[i+1]){
                    ans++; i++;
                }
            }
            cout<<ans<<endl;
        }
        
        return 0;
    }