#include <iostream>
float prueba (int x);
using namespace std;
int main (void){
int f;
cout << "Inserte el año que desea corroborar: ";
cin >> f;
if (prueba(f) == true){
    cout << "El año es bisiesto" << endl;
}
else
{
    cout << "El año no es bisiesto" << endl;
}

}
//FUNCIONES
float prueba (int x){
    if (x % 400 == 0){
        return true;
    }
    if (x % 4 == 0 && x  % 100 != 0){
        return true;
    }
    
    } 