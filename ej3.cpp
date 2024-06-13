// EJERCICIO 3 MIRKO CICCHESE
#include<iostream>
#include<vector>

using namespace std;

int asientosDisponibles(int solicitud){

    int tam;

    int disponible = 0;

    vector<int> asientos = {15, 28, 44, 45, 70};

    tam = asientos.size();


    for(int i = 0; i <= tam; i++){
        if(asientos[i] == solicitud){
            disponible = 1;
        }
    }

    return disponible;
}

int main(){

    int solicitud;
    cout << "Asientos disponibles: 15, 28, 44, 45, 70" << endl;

    cout << "Ingrese el numero del asiento que desea ocupar: ";
    cin >> solicitud;

    int disponible = asientosDisponibles(solicitud);

    if(disponible == 1){
        cout << "Felicitaciones, el asiento numero " << solicitud << " esta disponible";
    }else{
        cout << "Lo sentimos, el asiento numero " << solicitud << " esta ocupado, pero aun quedan 5 asientos disponibles: 15, 28, 44, 45, 70";
    }

    return 0;
}
