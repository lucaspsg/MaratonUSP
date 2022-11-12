#include <bits/stdc++.h>
#define MODULO  1000000007
#define ll long long
using namespace std;

ll sq(ll n){

    return n * n;

}

ll fast_exp(ll a, ll b){

    if(b == 0) return 1;

    else if(b % 2 == 0) return sq(fast_exp(a, b / 2)) %  MODULO;

    else return (a * fast_exp(a, b - 1)) % MODULO;

}

int main(){

    int T, a, b;

    cin >> T;

    while(T){

        cin >> a >> b;

        cout << fast_exp(a, b) << endl;

        T--;

    }

}