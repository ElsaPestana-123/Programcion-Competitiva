/*
E. Deliv-e-droid
time limit per test1 second
memory limit per test256 megabytes

In the game Deliv-e-droid, a robot droid must deliver packages while avoiding obstacles. 
At the end of the game, the score is calculated as follows:

50 points are earned for each package delivered.

10 points are lost for each collision with an obstacle.

A bonus of 500 points is awarded if the number of packages delivered is greater than the number of collisions with obstacles.
Your task is to determine the final score at the end of a game.

Input
The first line contains an integer d (0≤d≤10^6) — the number of packages delivered.

The second line contains an integer c (0≤c≤10^6) — the number of collisions with obstacles.

Output
Print a single integer s — the final score obtained by applying the scoring system described.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
   long long n, m;
   cin >> n;
   cin >> m;
 
   int count = 50 * n;
   count = count - (10*m);
   if(n > m) count = count + 500;
   cout << count << endl;
    
    return 0;
}