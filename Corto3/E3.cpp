#include <iostream>
using namespace std;
float prueba (int x);

//MAIN CODIGO
int main (void){
int f;
cout << "Inserte el año que desea corroborar: ";
cin >> f;
if (prueba(f) == 1){
    cout << "El año es bisisesto." << endl;
}
else
{
    cout << "El año no es bisiesto." << endl;
}

}

//FUNCIONES
float prueba (int x){
    if (x % 400 == 0){
        return 1 ;
    }
    if (x % 4 == 0){
        if (x  % 100 != 0){
        return 1 ;
    }
    }
  }
   

   
