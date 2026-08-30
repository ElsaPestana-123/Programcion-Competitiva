/*
G. Primality Test
time limit per test1 second
memory limit per test256 megabytes

You are given an integer n. 
Your task is to determine whether n is a prime number.

An integer n≥2 is prime if it has no positive divisors other than 1 and n.

Input
The only input line containis a single integer n (2≤n≤10^9).

Output
Print a single line containing — YES if n is prime, or NO if n is composite.

Scoring
Subtask 1 (50 points): 2≤n≤10^6
Subtask 2 (50 points): 2≤n≤10^9
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    bool isPrime = true;

    if (n <= 1) {
        isPrime = false;
    }

    for(long long i = 2; i*i <= n; i++){
        if(n % i == 0){
            isPrime = false;
            break;
        }
        
    }

    if(isPrime){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}