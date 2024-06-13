// EJERCICIO 2 MIRKO CICCHESE SUMA MATRIZ.
#include<iostream>

using namespace std;

int main(){

    int filas;
    int columnas;
    int filas2;
    int columnas2;

    cout << "Ingresa las filas de la matriz 1: ";
    cin >> filas;
    cout << "Ingresa las columnas de la matriz 1: ";
    cin >> columnas;

    cout << "Ingresa las filas de la matriz 2: ";
    cin >> filas2;
    cout << "Ingresa las columnas de la matriz 2: ";
    cin >> columnas2;

    if(filas != filas2){
        cout << "filas y col distintas";
        return -1;
    }if(columnas != columnas2){
        cout << "filas y col distintas";
        return -1;
    }

    int matriz[filas][columnas];

    for(int i= 1; i <= filas; i++){
        for(int j = 1; j <= columnas; j++){
            cout << "Ingrese el valor de la matriz 1 en: " << "[" << i << "]"<< "[" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    int matriz2[filas2][columnas2];

    for(int i= 1; i <= filas2; i++){
        for(int j = 1; j <= columnas2; j++){
            cout << "Ingrese el valor de la matriz 2 en: " << "[" << i << "]"<< "[" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }

    cout << endl;
    cout << "La suma de las matrices es: "<< endl;
    for(int i= 1; i <= filas; i++){
            cout << endl;
        for(int j = 1; j <= columnas; j++){
            cout << matriz[i][j] + matriz2[i][j] << " ";
        }
    }
    cout << endl;

    return 0;
}
