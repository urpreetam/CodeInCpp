/**
Your task is to calculate the number of trailing zeros in the factorial n!.

For example, 20!=2432902008176640000 and it has 4 trailing zeros.

Input

The only input line has an integer n.

Output

Print the number of trailing zeros in n!.

Constraints
1 <= n <= 10^9
Example

Input:
20

Output:
4
**/

//Code  //Code  //Code  //Code  //Code  

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll num;
    cin >> num;
    ll mlt = 5;
    ll result = 0;
    while(mlt <= num ){
        ll rmn = num/ mlt;
        result += rmn;
        mlt *= 5;        
    }
    cout << result << "\n";
    return 0;
}
