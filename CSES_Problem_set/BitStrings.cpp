/** Your task is to calculate the number of bit strings of length n.

For example, if n = 3, the correct answer is 8, because the possible bit strings are 000, 001, 010, 011, 100, 101, 110, and 111.

Input

The only input line has an integer n.

Output

Print the result modulo 109+7.

Constraints
1 <= n <= 10^6
Example

Input:
3

Output:
8
**/

//code  //code  //code  //code  //code
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    int modulo = 1000000007;
    ll ans = 1;
    while(n > 29){
        ans *= pow(2,29);
        ans %= modulo;
        n -= 29;
    }
    ans *= pow(2,n);
    ans %= modulo;
    cout << ans << endl;
    return 0;
}
