#include <bits/stdc++.h>
using namespace std;


// description: https://codeforces.com/problemset/problem/2065/A


int void main(){
    int t;

    cin >> t;
    
    while (t--){
        string s;
        cin >> s;
        s.pop_back();
        s.pop_back();
        s.push_back('i');
        cout << s <<endl;
    }

}