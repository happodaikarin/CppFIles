#include <iostream>
using namespace std;

bool implicacion(bool p, bool q){
    return !p || q;
}

bool bicondicional(bool p, bool q){
    return p == q;
}

int main(){
    bool p , q;

    cout<<"Introduce valores para p (0 o 1): ";
    cin>>p;
    cout<<"Introduce valores para q (0 o 1): ";
    cin>>q;

    //Resultados

    cout<<"Conjuncion (p y q): "<<(p&&q)<<endl;
    cout<<"Disyucion (p ó q): "<<(p||q)<<endl;
    cout<<"O exclusivo(p XOR q): "<<(p^q)<<endl;
    cout<<"Implicacion (p -> q): "<<implicacion(p,q)<<endl;
    cout<<"Bicondiciona(p<->q: "<<bicondicional(p,q)<<endl;

    return 0;

}