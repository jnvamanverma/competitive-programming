//https://www.hackerrank.com/contests/hack-the-interview-iv-apac/challenges/good-binary-string
#include <bits/stdc++.h>

using namespace std;

int minimumMoves(string s, int d) {
    int c=0, p=0;
    for(int i=0; i<s.size(); i++){
        if(s.at(i) == '0'){
            p++;
            if(p==d){
                c++; p=0;
            }
        }
        else{
            p=0;
        }
    }
    if(p==d) c++;

    return c;
}

int main()
{
    string s;
    getline(cin, s);

    int d;
    cin>>d;
    cout<<minimumMoves(s, d)<<endl;
    return 0;
}
