//EJERCICIO 1 MIRKO CICCHESE
#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> arreglo = {10,20,30,40,50};

    cout << "Array inicial: ";
    for(int i = 0; i <= arreglo.size()-1; i++){
        cout << arreglo[i]<< " ";;
    }

    arreglo.push_back(60);
    arreglo.push_back(70);

    cout << endl;
    cout << "Array despues de agregar elementos: ";
    for(int i = 0; i <= arreglo.size()-1; i++){
    cout << arreglo[i] << " ";
    }

    arreglo[2] = NULL;

    cout << endl;
    cout << "Array despues de eliminar el tercer elemento: ";
    for(int i = 0; i <= arreglo.size()-1; i++){
        cout << arreglo[i]<< " ";;
    }
    cout << endl;


    return 0;
}
