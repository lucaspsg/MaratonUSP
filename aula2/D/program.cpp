#include <bits/stdc++.h>
using namespace std;

int main(){

        int t, n, k, beg, end, count;
        string s;

        cin >> t;

        while(t){

            beg = 0, count = 0, end = 0;

            cin >> n >> k;

            cin >> s;

            for(int i = 0; i < n; i++)
                
                if(s[i] == '*'){
                    s[i] = 'x';
                    count++;
                    beg = i;
                    break;
                };

            for(int i = n - 1; i >= 0; i--)
                
                if(s[i] == '*'){
                    end = i;
                    break;
                };

            while(beg < end){

                for(int i = beg + k; i > beg; i--){

                    if(i < n && s[i] == '*'){
                        s[i] = 'x';
                        count++;
                        beg = i;
                        break;
                    }

                }

            }

        
            cout << count << endl;

            t--;

        }

}