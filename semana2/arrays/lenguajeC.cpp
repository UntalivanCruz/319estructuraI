#include <iostream>

using namespace std;

int main(){
    
    int notas[4];
    
    notas[0]=50;
    notas[1]=25;
    notas[2]=45;
    notas[3]=56;

    cout<<notas[5]<<endl;
    
    bool estado[2][2];
    
    //range(start,finish,incr)
    for(int i=0;i<2;i++){
        for(int x=0;x<2;x++){
            cout<<"Ingrese dato ["<<i<<"]"<<"["<<x<<"]:";
            cin>>estado[i][x];
        }
    }
    
    return 0;
}