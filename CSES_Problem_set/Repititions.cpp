/*
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

Input

The only input line contains a string of n characters.

Output

Print one integer: the length of the longest repetition.

Constraints
1 <= n <= 10^6
Example

Input:
ATTCGGGA

Output:
3
*/

// Code // Code // Code // Code // Code

#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define enout(n) cout << n <<"\n"
typedef long long ll;

int main(){
    ll count = 1, answer = 1;
    string str;
    cin >> str;
    ll len = str.size();
    
    for(int i = 0; i < len-1; ++i){
        if(str[i] == str[i+1]){
            count++;
            answer = max(answer, count);
        }
        else count = 1;
    }
    enout(answer);
    return 0;
}
