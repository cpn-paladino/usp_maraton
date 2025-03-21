#include <bits/stdc++.h>
using namespace std;


// description: https://cses.fi/problemset/task/1646



const int MAXN = 2000100;
long long x[MAXN];

int void main(){
    int n,q;

    cin >> n >> q;

    for (int i=1; i<= n; i++){
        cin >> x[i];
    }

    while(q--){
        int a, b;
        cin >> a >> b;
        cout << prefixo[b] - prefixo[a-1] << endl;
    }



}