/* 
A number spiral is an infinite grid whose upper-left square has number 1. Here are the first five layers of the spiral:
                                       01 02 09 10 25
                                       04 03 08 11 24
                                       05 06 07 12 23
                                       16 15 14 13 22
                                       17 18 19 20 21
                                       
Your task is to find out the number in row y and column x.

Input

The first input line contains an integer t: the number of tests.

After this, there are t lines, each containing integers y and x.

Output

For each test, print the number in row y and column x.

Constraints
1 <= t <= 105
1 <= y,x <= 109
Example

Input:
3
2 3
1 1
4 2

Output:
8
1
15
*/

//Code //Code //Code //Code //Code

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(ll y, ll x){
    ll number = max(x,y);
    ll sqrNum = number*number;
    ll ans = 0;
    if(number%2 == 0){
        ans = sqrNum + y - x - number + 1;
        cout << ans << "\n";
    }
    else{
        ans = sqrNum + x - y -number + 1;
        cout << ans << "\n";
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        ll y,x;
        cin >> y >> x;
        solve(y,x);
    }
}
