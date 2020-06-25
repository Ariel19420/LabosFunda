#include <iostream>
using namespace std;
int main (void){
int num, x, y, xd = 0;
cout << "Inserte la cantidad de datos que desea que tenga el arreglo: \n";
cin >> num;
int arreglo[num]{};
for (int i = 0; i != num; i++){
    cout << "Numero: "<<endl;
    cin >> x;
    arreglo[i] = x; 
}
cout << "Inserte el numero que desea buscar: \n";
cin >> y;
for (int f = 0; f < num; f++){
    if (arreglo[f] == y){
        xd++;    
    }
} 
cout << "El numero que buscaba se repite: " << xd <<" veces"<<endl;
}