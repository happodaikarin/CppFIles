//
// Created by happodaikarin on 11/13/23.
//
#include <iostream>
using namespace std;
int main(){

    const int numeroSecreto = 42;
    int intentos = 5, intento;

    while(intentos>0){
        cout << "Adivina numero del 1 al 100: ";
        cin>>intento;
        if (intento == numeroSecreto){
            cout << "Felicidades adivinaste el numero"<<endl;
            break;
        }else if (intento > numeroSecreto){
            cout << "el numero secreto es menor"<<endl;
        }else if(intento < numeroSecreto){
            cout << "El numero secreto es mayor"<<endl;
        }
            cout << "te quedan "<<intentos<<" intentos"<<endl;
            intentos--;
        {

        }
    }


    if(intentos==0){

        cout<<"Se te acabaron los intentos, el numero secreto era: "<<numeroSecreto<<endl;
    }


    return 0;
}