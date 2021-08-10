//POO
#include <iostream>

using namespace std;

class Carro{
  public:
    string marca;
  private:
    float precio;
};

int main(){
    // int cantidadMatricula;
    
    Carro carroMama;
    carroMama.marca = "Mazda";
    cout<<"Marca de carro 1: "<<carroMama.marca<<endl;
    
    //Forma dinamica
    Carro *listaCarros = new Carro[5];
    
    //(*listaCarros).marca
    listaCarros->marca = "Toyota";
    cout<<"Marca de la lista: "<<listaCarros->marca<<endl;
    
    /*Primero accedo a la referencia del puntero, luego busco su atributo
     cout<<(*listaCarros).marca<<endl;
     listaCarros->marca;*/
     
     delete[] listaCarros;
    return 0;   
}