#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, d;
    cin >> n >> d;

    vector<string> calendar;

    calendar.push_back("+---------------------+");

    string fila = "|";
    int contador = 0;

    if(d == 1){
        contador = 0;
            
    } else if (d == 2){
        fila += "...";
        contador = 1;
         
    } else if (d == 3){
        fila += "......";
        contador = 2;
            
    } else if (d == 4){
        fila += ".........";
        contador = 3;
            
    } else if (d == 5){
        fila += "............";
        contador = 4;
            
    } else if (d == 6){
        fila += "...............";
        contador = 5;
            
    } else if (d == 7){
        fila += "..................";
        contador = 6;
    }

    for(int j = 1; j <= n; j++){
        if(j < 10){
            fila += ".." + to_string(j);
        } else {
            fila += "." + to_string(j);
        }
        contador++;

        if(contador == 7){
            fila += "|";
            calendar.push_back(fila);
            fila = "|";
            contador = 0;
        }
    }

    if(contador > 0){
        while(contador < 7){
            fila += "...";
            contador++;
        }
        fila += "|";
        calendar.push_back(fila);
    }

    calendar.push_back("+---------------------+");

    for(int i = 0; i < calendar.size(); i++){
        cout<< calendar[i] << "\n";
    }

    return 0;
}