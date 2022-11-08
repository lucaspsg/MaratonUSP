#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;

    cin >> n;

    int s[n];

    for(int i = 0; i < n; i++) cin >> s[i];

    int m;

    cin >> m;

    int q[m];

    for(int i = 0; i < m; i++) cin >> q[i];

    int si = 0, qi = 0;

    while(si < n){

        while(qi < m && q[qi] < s[si]) qi++;

        if(q[qi] != s[si]) cout << s[si] << endl;

        si++;

    }

}