#include <iostream>
using namespace std;

int main (void){
string pal; 
cout << "Ingrese la palabra a verificar \n" ;
cin >> pal;
if (pal.length() >= 10){
    cout << "La palabra tiene mas de 10 caracteres. \n";
}

else{
    cout << "La palabra tiene menos de 10 caracteres. \n";

}
if (pal.length() % 2 == 0){
    cout << "Y es par";
}
else
{
    cout << "Y es impar";
}

}