/* 
You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

On each move, you may increase the value of any element by one. What is the minimum number of moves required?

Input

The first input line contains an integer n: the size of the array.

Then, the second line contains n integers x1,x2,…,xn: the contents of the array.

Output

Print the minimum number of moves.

Constraints
1 <= n < 2*10^5
1 <= xi < 10^9
Example

Input:
5
3 2 5 1 7

Output:
5
*/


#include<bits/stdc++.h>
using namespace std;
#define enout(n) cout << n << "\n"
#define fo(i, n, k) for(int i = 0; i < n; i+=k)
typedef long long ll;

void solve(ll arr[], ll n){
    ll ans = 0;
    ll temp;
    fo(i,n-1,1){
        if(arr[i] > arr[i+1]){
            temp = arr[i] - arr[i+1];
            ans+= temp;
            arr[i+1] = arr[i];
        }
    }
    enout(ans);
}

int main(){
    ll n;
    cin >> n;
    ll array[n];
    fo(i,n,1) cin >> array[i];
    solve(array,n);
    return 0;
}
