//
// Created by happodaikarin on 11/11/23.
//


#include <iostream>
#include <vector>


using namespace std;
const void busquedaLineal(const vector<int>&sucesion, int entero){

    int i = 0;

    while(i < sucesion.size() && sucesion[i] != entero){
        i++;
    }
    if(i<=sucesion.size()){
        cout << "numero encontrado en la posicion: " <<i<<endl;
    }else{
        cout << "numero no encontrado"<<endl;
    }
}



int main(){

    int n;
    cout <<"Ingrese catidad de numero en la susecion: ";
    cin >> n;

    vector<int> sucesion(n);
    for (int i = 0; i < sucesion.size(); ++i) {
        cout << "posicion: " <<i<<": ";
        cin>>sucesion[i];
    }


    int numero;
    cout <<"Ingrese el numero que quiere encontrar: ";
    cin>>numero;


    busquedaLineal(sucesion,numero);




    return 0;

}
