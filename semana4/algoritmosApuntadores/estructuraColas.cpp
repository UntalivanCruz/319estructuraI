#include <iostream>
#include <stdlib.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};

//Prototipos de función
void insertarCola(Nodo *&,Nodo*&,int);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&,Nodo *&,int &); //Algoritmo Busqueda

int main()
{
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    
    int dato;
    cout<<"Digite un numero:";
    cin>>dato;
    insertarCola(frente,fin,dato);
    cout<<"Digite un numero:";
    cin>>dato;
    insertarCola(frente,fin,dato);
    cout<<"Digite un numero:";
    cin>>dato;
    insertarCola(frente,fin,dato);
    //Eliminar los elementos de la cola
    cout<<"Quitando los nodos de la cola: ";
    while(frente!=NULL){
        suprimirCola(frente,fin,dato);
        if(frente!=NULL){
            cout<<dato<<" , ";
        }
        else{
            cout<<dato<<".";
        }
    }
    
    return 0;
}

//Función para insertar elementos en una cola
void insertarCola(Nodo *&frente,Nodo *&fin,int n){
    Nodo *nuevo_nodo=new Nodo();
    
    nuevo_nodo-> dato=n;
    nuevo_nodo-> siguiente=NULL;
    
    if(cola_vacia(frente)){
        frente=nuevo_nodo;
    }
    else{
        fin->siguiente=nuevo_nodo;
    }
    
    fin=nuevo_nodo;
    
    cout<<"\tElemento "<<n<<" insertado a cola correctamente"<<endl;
}

//Funcion para determinar si la cola esta cola_vacia
bool cola_vacia(Nodo *frente){
    return (frente==NULL)? true : false;
}

//Funcion para eliminar elementos de la cola
void suprimirCola(Nodo *&frente,Nodo *&fin,int &n){
    n =frente->dato;
    Nodo *aux=frente;
    
    if(frente==fin){
        frente=NULL;
        fin=NULL;
    }
    else{
        frente=frente->siguiente;
    }
    delete aux;
}