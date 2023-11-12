//
// Created by happodaikarin on 11/11/23.
//


#include <iostream>
#include <vector>

using namespace std;

int econtrarMaximo(const vector<int>&susecion){
    int maximo = susecion[0];
    for (int i = 1; i < susecion.size(); ++i) {
        if (susecion[i] > maximo){
            maximo = susecion[i];
        }
    }



    return maximo;
}


int main(){
    int n;
    cout << "Ingrese la cantidad de numeros en la sucesión: ";
    cin >> n;

    vector<int> susecion(n);
    for (int i = 0; i < susecion.size(); ++i) {
            cin >> susecion[i];
    }


    int maximo = econtrarMaximo(susecion);
    cout << "El elemento maximo de la susecion es: " << maximo << endl;




    int sucesion2[] = {23,3,34,54,56,23,66,43};
    int n2 = sizeof(sucesion2)/sizeof(sucesion2[0]); ;
    int maximo2 = susecion[0];
    for (int i = 1; i<n2;i++){
        if(sucesion2[i]>maximo2)
        maximo2 = sucesion2[i];
    }

    cout<<"El numero maximo del arreglo es: "<<maximo2<<endl;


    return 0;

}
