//https://www.hackerrank.com/contests/hack-the-interview-iv-apac/challenges/arrange-students/submissions/code/1323896267

#include<bits/stdc++.h>
using namespace std;

string arrangeStudents(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int h=-1;
    int j=0;
    while (j<a.size() && a[j] == b[j]) j++;
    bool flag = a[j]<b[j];
    for(unsigned int i=0; i<a.size(); i++){
        if(flag){
            //starts from a
            if(a[i]<h) return "NO";
            else h=a[i];
            if(b[i]<h) return "NO";
            else h=b[i];
        }
        else{
            //starts from b
            if(b[i]<h) return "NO";
            else h=b[i];
            if(a[i]<h) return "NO";
            else h=a[i];
        }
    }
    return "YES";
}

int main(){
    int test, n;
    cin>>test;
    while (test--)
    {
        cin>>n;
        vector<int> a(n), b(n);
        for(int &x: a) cin>>x;
        for(int &x: b) cin>>x;
        cout<<arrangeStudents(a, b)<<endl;
    }
    
    return 0;
}