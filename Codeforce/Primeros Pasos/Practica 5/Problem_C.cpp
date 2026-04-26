#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<vector<long long>> matriz(n, vector<long long>(n));

    long long valor = n * n;

    int inicioFila = 0, finFila = n - 1;

    int inicioColumna = 0, finColumna = n - 1;

    while (inicioFila <= finFila && inicioColumna <= finColumna) {

        // Recorrer de izquierda a derecha

        for (int j = inicioColumna; j <= finColumna; j++) {

            matriz[inicioFila][j] = valor--;

        }

        inicioFila++;

        // Recorrer de arriba hacia abajo

        for (int i = inicioFila; i <= finFila; i++) {

            matriz[i][finColumna] = valor--;

        }

        finColumna--;

        if (inicioFila <= finFila) {

            // Recorrer de derecha a izquierda

            for (int j = finColumna; j >= inicioColumna; j--) {

                matriz[finFila][j] = valor--;

            }

            finFila--;

        }

        if (inicioColumna <= finColumna) {

            // Recorrer de abajo hacia arriba

            for (int i = finFila; i >= inicioFila; i--) {

                matriz[i][inicioColumna] = valor--;

            }

            inicioColumna++;

        }

    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriz[i][j] << (j == n - 1 ? "" : " ");
        }
        cout << "\n";
    }

    return 0;
}
