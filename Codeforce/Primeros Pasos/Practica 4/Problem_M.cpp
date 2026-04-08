/*
M. The Acrobat's Ladder
time limit per test1 second
memory limit per test1024 megabytes

An acrobat performs on a rope ladder hanging from the top of
a circus tent. He always moves in fixed-length steps: when 
he climbs up, he goes up by n rungs; when he goes down, he 
descends by m rungs, where n and m are positive integers.

The acrobat starts from the bottom rung (rung 0) and performs 
his routine: he must reach the top rung at least once and
finally return to the bottom rung. The acrobat can visit 
the same rung multiple times, but he must never go below rung 0.

Your task is to determine:

the minimum number of rungs that the ladder must have so 
that the acrobat can complete his performance, and one valid 
sequence of moves consisting of characters + and - describing 
the acrobat's motion, where + means go up n rungs and - means go down m rungs.

Input
The only input line contains two integers n and m (1≤n≤10^4, 1≤m≤10^4) 
— the number of rungs climbed in one upward move and the number 
of rungs descended in one downward move, respectively.

Output
The first line should contain the minimum number of rungs that 
the ladder must have so that the acrobat can perform his act.

The second line should contain a string consisting of 
characters + and - describing one valid sequence of steps
that allows the acrobat to reach the top and return to the bottom.
*/
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;

    string signos;

    long long escalon = 0;
    long long altura = 0;

    do {
        if(escalon < m){

            escalon += n;
            signos += '+';

        } else{
            escalon -= m;
            signos += '-';
        }

        altura = max(altura, escalon);
    } while (escalon != 0);
    

    cout << altura << endl;
    cout << signos << endl;

    return 0;
}