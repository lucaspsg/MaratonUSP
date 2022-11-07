#include <bits/stdc++.h>
using namespace std;

#define MAX 0
#define ll long long

int main(){

    int t, b, p, f, h, c;

    cin >> t;

    while(t){

        cin >> b >> p >> f;
        cin >> h >> c;

        int amount = min(p + f, b/2);
        long long maxi = MAX;

        for(int i = 0; i <= p; i++){
            for(int j = 0; j <= f; j++){
                
                if(i + j <= amount){
                     
                    maxi = max((ll)(i * h + j * c), maxi);
            
                }

            }

        }

        cout << maxi << endl;

        t--;

    }

}
