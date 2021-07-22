#include <iostream>

using namespace std;

int main(){
    //tipado
    int numeroVisitas=0;
    char letraCurso='E';
    bool estadoMotor= true;
    float salarioMensual = 5400;
    
    /*
    + sumar
    - resta
    / dividir
    * multiplicar
    ^ potencia
    */
    
    //numeroVisitas="texto";
    
    cout<<"Valor numerico: "<< numeroVisitas<<endl;
    cout<<"Caracteres, texto: "<<letraCurso<<endl;
    cout<<"Un booleano: "<<estadoMotor<<endl;
    cout<<"Flotante, decimal: "<<salarioMensual<<endl;
    
    if(1==0){
        cout<<"Cumple";
    }
    
    int numerosRifa[5]={1,5,9,4,3};
    
    for(int cont=0;cont<5;cont++){
        cout<<cont<<" - "<<numerosRifa[cont]<<endl;
    }
    
    return 0;
}