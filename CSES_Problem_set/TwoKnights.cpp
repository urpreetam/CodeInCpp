/*
Your task is to count for k=1,2,...,n the number of ways two knights can be placed on a k×k chessboard so that they do not attack each other.

Input

The only input line contains an integer n.

Output

Print n integers: the results.

Constraints
1 <= n <= 10000
Example

Input:
8

Output:
0
6
28
96
252
550
1056
1848
*/

// Code // Code // Code // Code // Code

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define enout(n) cout << n << endl;

void solve(ll n){
    ll total = n*n*(n*n - 1)/2;
    ll threat = 4*(n-1)*(n-2);
    ll ans = total - threat;
    enout(ans);
}

int main(){
    ll n;
    cin >> n;
    for(int i = 1; i <= n; ++i)solve(i);
}
