#include <bits/stdc++.h>
using namespace std;

vector<vector<char>> limpiar(const vector<string>& matriz){
    vector<vector<char>> ascii(9, vector<char>(9, 0));
    int filas = 0;

    for(int i = 0; i < 13; i++){
        if(matriz[i][0] == '+') continue;

        int columnas = 0;

        for(int j = 0; j < 13; j++){
            if((matriz[i][j] >= '1' && matriz[i][j] <= '9') || matriz[i][j] == '.' ){
                ascii[filas][columnas] = matriz[i][j];
                columnas++;
            }
        }

        filas++;
    }   
    
    return ascii;
    
}

bool esValidoFilas(const vector<vector<char>>& matriz){
    for(int i = 0; i < 9; i++){
        bool visto[10] = {false};

        for(int j = 0; j < 9; j++){
           char actual = matriz[i][j];

            if(actual != '.'){
              int numero = actual - '0';

              if(visto[numero]) return false;

              visto[numero] = true;

            }
        }
    }
    return true;
}

bool esValidoColumnas(const vector<vector<char>>& matriz){
    for(int j = 0; j < 9; j++){
        bool visto[10] = {false};

        for(int i = 0; i < 9; i++){
            char actual = matriz[i][j];

            if(actual != '.'){
              int numero = actual - '0';

              if(visto[numero] == true) return false;

              visto[numero] = true;

            }
        }
    }

    return true;
}

bool esValido3x3(vector<vector<char>>& matriz, int fila, int columna){
    set<char> sets;
    
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            
            char actual = matriz[fila +i][columna+j];

            if(actual != '.'){
                if(sets.find(actual) != sets.end()){
                    return false;
                }

                sets.insert(actual);
            }
        }
    }

    return true;

}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<string> matriz(13);
    for (int i = 0; i < 13; i++) {
        cin >> matriz[i]; 
    }

    vector<vector<char>> limpia = limpiar(matriz);

    if(!esValidoFilas(limpia) || !esValidoColumnas(limpia)){
        cout << "GRESKA\n";
        return 0;
    }

    for(int i = 0; i < 9; i+=3){
        for(int j = 0; j < 9; j+=3){
            if(!esValido3x3(limpia, i,j)){
                cout << "GRESKA\n";
                return 0;
            }
        }
    }

    cout <<"OK\n";

    return 0;
}