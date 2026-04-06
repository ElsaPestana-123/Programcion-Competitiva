/*
K. Curious Multiplication
time limit per test1 second
memory limit per test256 megabytes

There are many ways to multiply two numbers, and one of the most curious is the so-called half-and-double method 
(also known as Russian peasant multiplication).

The procedure works as follows:

Start with two positive integers a and b, written side by side.
Repeatedly replace a by ⌊a/2⌋ and b by b×2.
Stop when a becomes 1 (include the row where a=1).
Cross out all rows where a is even.
The product a×b is equal to the sum of the remaining values of b.

Your task is to print the full computation table produced by this method, followed by the final result.

Input
The only input line contains two integers a and b (1≤a,b≤10^9).

Output
Print the computation table of the half-and-double method, one row per line. 
Each row must contain the left value and the right value separated by two spaces.

After the table, print a line in the format:

Result = S

where S is the sum of the right values corresponding to rows where the left value is odd.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    long long a,b;
    cin >> a >> b;
 
    long long ans = 0;
 
    cout << a << " " << b << endl;
 
    while (a > 0){
 
        if(a % 2 != 0) ans += b;
        
        a /= 2;
        b *= 2;
 
       if (a > 0) cout << a << " " << b << "\n";
    }
 
    cout << "Result = " << ans << endl;
 
    return 0;
 
}