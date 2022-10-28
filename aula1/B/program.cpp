#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, px, py, x, y, nx, ny;

    int counter = 0;

    cin >> n;

    cin >> px >> py;

    cin >> x >> y;

    cin >> nx >> ny;

    while(n > 2){

        if(y > py && nx < x) counter += 1;

        else if(y < py && nx > x) counter += 1;

        else if(x > px && ny > y) counter += 1;

        else if(x < px && ny < y) counter += 1;

        px = x; py = y; x = nx; y = ny;

        cin >> nx >> ny; 

        n -= 1;

    }

    cout << counter;

}