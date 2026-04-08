/*
J. Permutations
time limit per test1 second
memory limit per test256 megabytes

A permutation of length n is an array consisting of n distinct integers from 1 to n in arbitrary order. 
For example, [2,3,1,5,4] is a permutation, but [1,2,2] is not a permutation (2appears twice in the array), 
and [1,3,4] is also not a permutation (n=3 but there is a 4 in the array).

A permutation is called beautiful if there are no adjacent elements in the permutation whose absolute difference is 1.

You are given an integer n. 
Your task is to construct a beautiful permutation of integers 1,2,…,n if such a permutation exists. 
If there are several solutions, print any of them. If there is no solution, print NO SOLUTION.

Input
The only input line contains an integer n (1≤n≤10^6).

Output
If a beautiful permutation exists, print n integers: a permutation of length n such that for every adjacent pair ai,ai+1
it holds that |ai−ai+1|≠1.
 
If there is no such permutation, print NO SOLUTION.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    if(n == 1) {
        cout<< "1";
        return 0;
    }

    if(n == 2 || n == 3) {
        cout << " NO SOLUTION";
        return 0;
    }

    for(long long i = 2; i <= n; i+=2){
        cout << i << " ";
    }

    for(long long i = 1; i <= n; i+=2){
        cout<< i << " ";
    }
    
    return 0;
}