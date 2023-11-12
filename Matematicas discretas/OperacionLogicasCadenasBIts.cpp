//
// Created by happodaikarin on 11/11/23.
//

#include <iostream>
#include <string>
using namespace std;

string bitAnd(const string &cadena1,const string &cadena2){
    string result;
    for (size_t i = 0; i < cadena1.length() ; i++) {
        result += (cadena1[i] == '1' && cadena2[i] == '1') ? '1' : '0';
    }
    return result;
}



string bitOr(const string &cadena1,const string &cadena2){

    string result;
    for (size_t i = 0; i < cadena1.length(); i++) {
        result += (cadena1[i] =='1' || cadena2[i] == '1') ? '1' : '0';
    }
    return result;
}


string bitXor(const string &cadena1,const string &cadena2){
    string result;
    for (size_t i = 0; i < cadena1.length(); i++){
        result += (cadena1[i] =='1' != cadena2[i] =='1') ? '1' : '0';
    }

    return result;
}

int main(){
    string cadena1;
    string cadena2;
    cout<<"Ingrese la primera cadena de bits: ";
    cin>>cadena1;
    cout<<"Ingrese la segunda cadena de bits: ";
    cin>>cadena2;


    if(cadena1.length()!=cadena2.length()) {
        cout << "las cadenas deben ser del mismo tamaño";
        return 1;
    }

    cout<<"AND bit a bit: "<<bitAnd(cadena1, cadena2)<<endl;
    cout<<"OR bit a bit: "<<bitOr(cadena1,cadena2)<<endl;
    cout<<"XOR bit a bit: "<<bitXor(cadena1,cadena2)<<endl;


    return 0;
}


