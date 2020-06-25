#include <iostream>
using namespace std;
int main (void){
int n = 0;
int arreglo[100]{};
cout << "Los primeros 100 numeros primos de manera descendente son los siguientes: "<< endl;
for (int x = 1;x < 200; x += 2 ){
    arreglo[n] = x;
    n++;
    }
for (int i = 99; i >=0 ; i-- ){
    cout << arreglo[i] << endl;   
}

cout << "FIN\n";
}
