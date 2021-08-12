//Pilas

#include<iostream>
using namespace std;

struct  Nodo{
    int dato;
    Nodo *siguiente;
};

        //Refencia de tipo nodo
void agregarPila(Nodo *&,int);
void sacarPila(Nodo *&,int &);

int main(){
    //CREAR LA PILA
    Nodo *pila = NULL;
    int dato;
    
    for(int x=0;x<4;x++){
        cout<<"Ingrese valor de pila: "; cin>>dato;
        agregarPila(pila,dato);
    }
    
    cout<<"Sacando elementos de la pila: ";
    while(pila!=NULL){
        sacarPila(pila,dato);
        if(pila!=NULL){
            cout<<dato<<" , ";
        }
        else{
             cout<<dato<<" . ";
        }
    }
    return 0;
}

void agregarPila(Nodo *&pila,int n){
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato=n;
    nuevo_nodo->siguiente = pila;
    pila=nuevo_nodo;
    cout<<"\nElmento "<<n<<" Agregado a pila correctamente"<<endl;
}

void sacarPila(Nodo *&pila,int &n){
    Nodo *aux=pila;
    n=aux->dato;
    pila=aux->siguiente;
    delete aux;
}

/*
NUEVO                                      primero
______              _____               _____
|N# |      siguiente|   |               |   |
|   |  ---------->  |   |-------------> |   |
-----               -----               -----
*/