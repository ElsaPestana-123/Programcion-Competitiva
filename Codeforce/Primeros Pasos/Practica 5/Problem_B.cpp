/*
B. Diamond of Asterisks
time limit per test1 second
memory limit per test256 megabytes

You are given an odd integer x. 
Your task is to print a diamond shape of height x, made entirely of the character *.

The diamond must be centered:

The first row contains one asterisk centered.
Each following row increases by two asterisks until reaching the middle.
Then the number of asterisks decreases symmetrically until one at the bottom.

Input
The only input line contains a single odd integer x (1≤x≤999, x is odd).

Output
Print a diamond of height x, using exactly x lines. 
Each line must contain the correct number of spaces and asterisks so that the figure is centered.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    for(long long i = 0; i < n; i++){

        long long centro = n /2;

        long long distana = abs(centro - i);

        long long astericos = n - 2*distana;

        for(long long j = 0; j < distana; j++){
            cout << " ";
        }

        for(long long j = 0; j < astericos; j++){
            cout << "*";
        }
        cout << endl;

    }
    return 0;
}