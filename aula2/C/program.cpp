#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;

    bool isDec = true;

    cin >> n;

    int s[n];

    cin >> s[0];

    for(int i = 1; i < n; i++){

        cin >> s[i];

        if(s[i] >= s[i - 1] && isDec){
            isDec = false;
        }
        else if(s[i] <= s[i - 1] && !isDec){
            cout << "No" << endl;
            return 0;
        }


    }

    if(isDec) cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0;

}