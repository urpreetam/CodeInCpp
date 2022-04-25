/*
Your task is to divide the numbers 1,2,...,n into two sets of equal sum.

Input

The only input line contains an integer n.

Output

Print "YES", if the division is possible, and "NO" otherwise.

After this, if the division is possible, print an example of how to create the sets. First, print the number of elements in the first set followed by the elements themselves in a separate line, and then, print the second set in a similar way.

Constraints
1<= n <= 106
Example 1

Input:
7

Output:
YES
4
1 2 4 7
3
3 5 6

Example 2

Input:
6

Output:
NO
*/
// Code // Code // Code // Code // Code
#include<bits/stdc++.h>
using namespace std;
#define FOR(init, conditn, increament) for(int i = init; i < conditn; i += increament)
#define endl "\n"
#define enout(n) cout << n << endl
#define sout(n) cout << n << " "
#define pb push_back
typedef long long ll;

void solve(ll num, ll sum){
    ll toCalculate = sum /2;
    ll rem = num;
    ll temp;
    vector<ll> vec;
    while(toCalculate != 0){
        if(toCalculate >= rem){
            vec.pb(rem);
            toCalculate -= rem;
            rem--;
        }
        else{
            vec.pb(toCalculate);
            temp = toCalculate;
            toCalculate = 0;
        }
    }
    ll len = vec.size();
    enout(len);
    FOR(0, len,1){
        sout(vec[i]);
    }cout<< endl;
    cout << num- len << endl;
    FOR(1, num - len+2, 1){
        if(i != temp)sout(i);
    }
}

int main(){
    ll n, sum;
    cin >> n;
    sum = n*(n+1)/2;
    if(sum % 2 == 0){
        enout("YES");
        solve(n,sum);
    }
    else enout("NO");
}
