/*
You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input:

The first input line contains an integer n.

The second line contains n-1 numbers. Each number is distinct and between 1 and n (inclusive).

Output

Print the missing number.

Constraints
2 <= n <= 2*10^5
Example

Input:
5
2 3 1 5

Output:
4
*/

// Code // Code // Code // Code // Code


#include<bits/stdc++.h>
using namespace std;
#define enout(n) cout<< n << "\n"
#define sout(n)cout << n << " "
#define endl "\n"
typedef long long ll;

int main(){
    ll n,temp,sum = 0;
    cin >> n;
    for(int i = 1; i < n; ++i){
        cin >> temp;
        sum += temp;
    }
    ll ans = (n*n + n)/2 - sum;
    cout<< ans;
}
