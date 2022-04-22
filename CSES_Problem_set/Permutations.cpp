/*
A permutation of integers 1,2,...,n is called beautiful if there are no adjacent elements whose difference is 1.

Given n, construct a beautiful permutation if such a permutation exists.

Input

The only input line contains an integer n.

Output

Print a beautiful permutation of integers 1,2,...,n. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".

Constraints
1<=n<=106
Example 1

Input:
5

Output:
4 2 5 3 1

Example 2

Input:
3

Output:
NO SOLUTION
*/

// Code // Code // Code // Code // Code

#include<bits/stdc++.h>
using namespace std;
#define fur(i,n,counter) for(int i = 0; i < n; i += counter)
#define enout(n) cout << n << "\n"
#define sout(n) cout << n << " "
typedef long long ll;

void solve(ll num){
    if(num == 1) cout<< 1 << "\n";
    else{
        for(int i = 2; i <= num; i += 2)sout(i);
        for(int i = 1; i <=num; i += 2)sout(i);
    }
    
}
int main(){
    ll n;
    cin >> n;
    if(1 < n and n < 4)cout << "NO SOLUTION" << "\n";
    else solve(n);
}
