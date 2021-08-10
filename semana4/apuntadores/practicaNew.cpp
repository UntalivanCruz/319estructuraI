// Creen un arreglo dinamico con NEW y que puedan guardar 5 datos (ultimos digitos de su identidad)
//DELETE para liberar memoria.
#include <iostream>
using namespace std;

int main()
{
    int *lista = new int[5]; //Entender que pasa aqui?
    
    //Paso 1.- Se crea un apuntador de tipo INT
    //Paso 2.- Se le asigna posicion de memoria =
    //Paso 3.- NEW para reservar de forma dinamica espacio en memoria de un tipo de datos.

    cout<<lista<<endl;
    cout<<*lista<<endl;
    *lista=1;
    *++lista=1;
    *++lista=7;
    *++lista=9;
    *++lista=9;
    cout<<"1: "<<*lista<<endl;
    cout<<"2: "<<*--lista<<endl;
    cout<<"3: "<<*--lista<<endl;
    cout<<"4: "<<*--lista<<endl;
    cout<<"5: "<<*--lista<<endl;

    
    //delete
    delete[] lista;

    cout<<"Despues de borrar? : "<<*lista<<endl;
    return 0;
}
