#include <iostream>

using namespace std;


int main(){
    int *variable = new int;
    *variable=10;
    cout<<*variable;
    delete variable;
    
    return 0;
}