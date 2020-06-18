#include <iostream>
int mcd (int mayor, int menor);
using namespace std;
int main (void){
    
int mayor, menor, r;
cout << "MCD de dos numeros" << endl;
cout << "Digite el numero mayor: ";
cin >> mayor;
cout << "Digite el numero menor: ";
cin >> menor;
mcd (mayor, menor);

}

// Funciones
int mcd (int mayor, int menor){
    int r;
do
{
r = mayor % menor;
if(r != 0){
mayor = menor;
menor = r;
}
}
while(r != 0);
cout << "El MCD es: " << menor;
cout << endl;
}