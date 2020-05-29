//https://codeforces.com/contest/1352/problem/C
#include <bits/stdc++.h>
using namespace std;

void fastscan(int &number) 
{ 
    //variable to indicate sign of input number 
    bool negative = false; 
    register int c; 
  
    number = 0; 
  
    // extract current character from buffer 
    c = getchar(); 
    if (c=='-') 
    { 
        // number is negative 
        negative = true; 
  
        // extract the next character from the buffer 
        c = getchar(); 
    } 
  
    // Keep on extracting characters if they are integers 
    // i.e ASCII Value lies from '0'(48) to '9' (57) 
    for (; (c>47 && c<58); c=getchar()) 
        number = number *10 + c - 48; 
  
    // if scanned input has a negative sign, negate the 
    // value of the input number 
    if (negative) 
        number *= -1; 
}

#define ll long long int 
#define mod 1000000007 
#define loop(i,start,end) for(int i=start;i<end;i++)
#define endl "\n"
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)

int main()
{
    fast;
    ll test, n, k, low, high, mid; 
    cin>>test;

    while (test--)
    {
        cin>>n>>k;
        low = 1; high=10000000000;
        while (low<=high)
        {
            mid = (high-low)/2+low;
            if(mid-mid/n>k) high=mid-1;
            else if(mid-mid/n<k) low=mid+1;
            else{
                if(mid%n) cout<<mid<<endl;
                else cout<<mid-1<<endl;
                break;
            }
        }

    }
    

    return 0;
}