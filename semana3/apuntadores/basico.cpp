#include <iostream>

using namespace std;

int main(){
    /* 
*    1.Definicion de variable de tipo apuntador
     2.Acceder a la posicion de memoria
&    Obtener la posicion de memoria
->   Acceder a una instancia de memoria
    */
    int pagoMensual = 5000; //Variable normal
    bool estadoPago = false;
    int contadorDias = 30;
    cout<<"Dato: "<<pagoMensual<<endl;
    cout<<"Posicion en memoria(pagoMensual): "<<&pagoMensual<<endl;
    
    cout<<"\n***** APUNTADOR ****\n"<<endl;
    int * apuntador = &pagoMensual; // apuntrador
    cout<<"Posicion a la que apunta: "<<apuntador<<endl;
    cout<<"Posicion apuntador: "<<&apuntador<<endl;
    cout<<"Datos a donde apunta: "<<*apuntador<<endl;
    
    *apuntador = 6000/3;
    cout<<"Nuevo cambio(pagoMensual): "<<pagoMensual<<endl;
    
    //apuntador = &estadoPago; //No se puede por que es bool
    apuntador = &contadorDias;
    cout<<"Nuevo dato de apuntador(contadorDias): "<<*apuntador<<endl;
    return 0;
}