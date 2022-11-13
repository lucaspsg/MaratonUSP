#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, m;

    cin >> n >> m;

    int a[n][m], b[n][m];
    int moves[2 * n * m];
    int count = 0;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
            b[i][j] = 0;
        }

    for(int i = 0; i < n - 1; i++)
        for(int j = 0; j < m - 1; j++)
            if( a[i][j] == 1 && a[i + 1][j] == 1 && a[i][j + 1] == 1 && a[i + 1][j + 1] == 1){
                b[i][j] = 1;
                b[i + 1][j] = 1;
                b[i][j + 1] = 1;
                b[i + 1][j + 1] = 1;
                moves[2 * count] = i + 1;
                moves[2 * count + 1] = j + 1;
                count++;
            }

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(b[i][j] != a[i][j]){
                cout << -1 << endl;
                return 0;
            }

    cout << count << endl; 

    for(int i = 0; i < 2 * count; i += 2) cout << moves[i] << " " << moves[i + 1] << endl;
}