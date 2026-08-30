/*
H. Lamp State
time limit per test1 second
memory limit per test256 megabytes

You have a lamp that has two states, ON or OFF; initially, it is ON. 
There are exactly five buttons, each of them can be pressed at most once.

You are given five integers b1,b2,b3,b4,b5
(bi∈{0,1} for each 1≤i≤5) representing the state of each button: if bi=1, then the i-th 
button was pressed; otherwise, it was not pressed.

Each time a button is pressed, the lamp changes its state:

If the lamp is currently ON, it becomes OFF.
If the lamp is currently OFF, it becomes ON.
Your task is to determine whether the lamp is ON or OFF after processing all button presses.

Input
The only input line contains five integers b1,b2,b3,b4,b5
(0≤bi≤1) — the state of each button.

Output
Print ON or OFF depending on the lamp's state.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main(){
 
    int b1,b2,b3,b4,b5;
    cin >> b1 >> b2 >> b3 >> b4 >> b5;
 
    vector<int> v = {b1,b2,b3,b4,b5};
    int num = 1;
    int cont = count(v.begin(),v.end(),num);
 
    if(cont % 2 == 0) cout << "ON" << endl;
    else cout << "OFF" << endl;
    
    return 0;    
}