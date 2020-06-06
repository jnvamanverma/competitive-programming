//https://codeforces.com/contest/1362/problem/B
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
        int test, n, x, ans;
        cin>>test;
        while(test--){
            cin>>n;
            unordered_set<int> s;
            unordered_set<int> :: iterator it;
            for(int i=0; i<n; i++){
                cin>>x;
                s.insert(x);
            }
            bool flag;
            for(ans=1; ans<=1024; ans++){
                flag = true;
                for(it=s.begin(); it != s.end(); it++){
                    if(s.find(ans^ *it) == s.end()){flag=false; break;}
                }
                if(flag) break;
            }
            if(flag) cout<<ans<<endl;
            else cout<<-1<<endl;
        }
        return 0;
    }