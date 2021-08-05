#include <iostream>

using namespace std;

int main(){
    //Arreglo se crea en memoria, reserva espacios de forma continua
    // |xxxxxxxxxxx[d d d d d ]-------------------------------------------| RAM
    
    int loteria[5] = {1,3,4,6,7};
    cout<<loteria[0]<<endl;
    cout<<loteria[3]<<endl;
    
    cout<<"\n****** APUNTADOR*****\n"<<endl;
    //++ Incrementador
    // &variable  !=   loteria
    int * aptLoteria = loteria;
   // cout<<*++aptLoteria<<endl;
    for(int x=0;x<6;x++){
        cout<<"Posicion: "<<aptLoteria<<endl;
        cout<<*aptLoteria++<<endl;
    }
    return 0;
}