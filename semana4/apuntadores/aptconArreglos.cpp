#include <iostream>

using namespace std;

int main(){
    //FORMA TRADICIONAL
    int datos[4]={1,23,12,2};
    int *aptDatos = datos;
    
    //FORMA DINAMICA DE TRABAJAR CON APUNTADORES
    //new
    int *lista = new int[2];

    cout<<lista<<endl;
    cout<<*lista<<endl;
    *lista=50;
    cout<<"Nuevo valor: "<<*lista<<endl;
    *++lista=30;
    cout<<"Otro dato: "<<*lista<<endl;
    cout<<"Dato anterior: "<<*--lista<<endl;
    
    //delete
    delete[] lista;

    cout<<"Despues de borrar? : "<<*lista<<endl;
    return 0;
}