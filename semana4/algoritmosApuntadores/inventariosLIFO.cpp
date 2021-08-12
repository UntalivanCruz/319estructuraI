/*
EJERCICIO: Utilizar el algoritmo de Pilas, donde pueda agregar y quitar elementos en un inventario

Informacion por elemento debe ser:
    Codigo:string
    Descripcion:string
    Peso:float //Lbs
    Costo:float
    calculoCostoxLibra: float() //CostoXlibra

struct
class{
    public
        set, get
    private
        variables
}
*/

#include<iostream>
using namespace std;

class articulo{
    public:
        articulo *siguiente;
        void setDatos(){
            cout<<"Ingrese el codigo del producto: ";
            cin>>codigo;
            cout<<"Ingrese la descripcion: ";
            cin>>descripcion;
            cout<<"Peso:";
            cin>>peso;
            cout<<"Costo (LPS)):";
            cin>>costo;
        }
        
        string getDatos(){
            return codigo;
        }
    private:
        string codigo;
        string descripcion;
        float peso;
        float costo;
        float calcCostoxLibra();
};

void agregarArticulo(articulo *&);
void sacarArticulo(articulo *&, string &);

int main(){
    //CREAR INVENTARIO
    articulo *inventario = NULL;
    bool salir;
    string codigo;
    do{
        agregarArticulo(inventario);
        cout<<"Desea agregar mas elementos? 0.No 1.Si: "<<endl;
        cin>>salir;
    }while(salir);
    
    //Vaciar el inventario!
    cout<<"Vaciando el inventario: ";
    while(inventario!=NULL){
        sacarArticulo(inventario,codigo);
        if(inventario!=NULL){
            cout<<codigo<<" -> ";
        }
        else{
             cout<<codigo<<" . ";
        }
    }
    return 0;
}

void agregarArticulo(articulo *&inventario){
    articulo *nuevo_articulo = new articulo();
    nuevo_articulo->setDatos();
    nuevo_articulo->siguiente = inventario;
    inventario=nuevo_articulo;
    cout<<"\nElmento "<<nuevo_articulo->getDatos()<<" Agregado a inventario correctamente"<<endl;
}

void sacarArticulo(articulo *&pila,string &codigo){
    articulo *aux=pila;
    codigo=aux->getDatos();
    pila=aux->siguiente;
    delete aux;
}