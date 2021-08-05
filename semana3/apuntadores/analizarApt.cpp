#include <iostream>

using namespace std;

int main(){
    int total=100;
    float compras=0;
    int descuento=0;
    int valor=0;
    
    int *ap=&total; //total= 100  || ap=&total
    int *desc1;
    float *apt2=&compras; //apt2=&compras   || compras=0
    
    *ap=120;    //total= 120  || ap=&total
    desc1=ap;   //total= 120  || ap=&total    ||  desc1= ap =&total

    *desc1=*ap*2; //total=240 || ap=&total    ||  desc1= ap =&total
    compras=20;   //apt2=&compras   || compras=20
    
    desc1=ap;    //total=240 || ap=&total    ||  desc1= ap =&total
    valor=20;    //valor=20
    *apt2=100;   //apt2=&compras   || compras=100
    *desc1=20;   //total=20 || ap=&total    ||  desc1= ap =&total
    
    desc1=&valor; //desc1=&valor   ||  valor=20
    *apt2=20;       //apt2=&compras   || compras=20
    *desc1=40;      //desc1=&valor   ||  valor=40
    
    /* total=20
    compras=20
    descuento=0
    valor=40*/
    cout<<"Total: "<<total<<endl;
    cout<<"Compras: "<<compras<<endl;
    cout<<"Descuento: "<<descuento<<endl;
    cout<<"Valor: "<<valor<<endl;
    return 0;
}
